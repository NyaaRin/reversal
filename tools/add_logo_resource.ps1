param(
    [Parameter(Mandatory = $true)][string]$Path,
    [Parameter(Mandatory = $true)][string]$Logo,
    [Parameter(Mandatory = $true)][string]$Icon
)

$ErrorActionPreference = 'Stop'
Add-Type -TypeDefinition @"
using System;
using System.Runtime.InteropServices;

public static class SkyfallResource
{
    [DllImport("kernel32.dll", SetLastError = true, CharSet = CharSet.Unicode)]
    public static extern IntPtr BeginUpdateResource(string fileName, bool deleteExistingResources);

    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern bool UpdateResource(IntPtr update, IntPtr type, IntPtr name,
                                             ushort language, byte[] data, uint size);

    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern bool EndUpdateResource(IntPtr update, bool discard);
}
"@

$bytes = [IO.File]::ReadAllBytes((Resolve-Path $Logo))
$iconBytes = [IO.File]::ReadAllBytes((Resolve-Path $Icon))
$handle = [SkyfallResource]::BeginUpdateResource((Resolve-Path $Path), $false)
if ($handle -eq [IntPtr]::Zero) {
    throw "BeginUpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
}

try {
    # RCDATA 200 / en-US: the requested logonew.jpg branding asset.
    if (-not [SkyfallResource]::UpdateResource($handle, [IntPtr]10, [IntPtr]200, 1033,
            $bytes, [uint32]$bytes.Length)) {
        throw "UpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
    }

    # RCDATA 201 / en-US: the transparent logo derived from logonew.jpg. m64's
    # header draws this through its own ImGui draw list and DX9 device.
    if (-not [SkyfallResource]::UpdateResource($handle, [IntPtr]10, [IntPtr]201, 1033,
            $iconBytes, [uint32]$iconBytes.Length)) {
        throw "UpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
    }
}
finally {
    if (-not [SkyfallResource]::EndUpdateResource($handle, $false)) {
        throw "EndUpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
    }
}

Write-Host "attached logonew.jpg as RCDATA 200 and the transparent logo as RCDATA 201 to $Path"
