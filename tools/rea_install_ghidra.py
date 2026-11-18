"""Install REA's verified Ghidra release into ignored deps (official archive).

Does not install Java/REA or modify Codex configuration. The pinned SHA256 is
published by GitHub's NationalSecurityAgency/ghidra release asset API.
"""
import hashlib
import json
from pathlib import Path
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
DIRECTORY = ROOT / 'deps/rea-tools'
NAME = 'ghidra_12.1.4_PUBLIC_20260921.zip'
URL = 'https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_12.1.4_build/' + NAME
SHA256 = 'ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db'


def digest(path):
    value = hashlib.sha256()
    with path.open('rb') as source:
        while block := source.read(1024 * 1024):
            value.update(block)
    return value.hexdigest()


def main():
    DIRECTORY.mkdir(parents=True, exist_ok=True)
    archive = DIRECTORY / NAME
    if not archive.exists():
        partial = archive.with_suffix('.zip.part')
        print(f'Downloading official Ghidra release: {URL}', flush=True)
        with urllib.request.urlopen(URL, timeout=60) as response, partial.open('wb') as output:
            while block := response.read(1024 * 1024):
                output.write(block)
        actual = digest(partial)
        if actual != SHA256:
            raise RuntimeError(f'Archive SHA256 mismatch: {actual}; partial retained')
        partial.replace(archive)
    actual = digest(archive)
    if actual != SHA256:
        raise RuntimeError(f'Archive SHA256 mismatch: {actual}; archive retained')
    installed = DIRECTORY / 'ghidra_12.1.4_PUBLIC'
    if not installed.exists():
        with zipfile.ZipFile(archive) as package:
            for member in package.infolist():
                target = (DIRECTORY / member.filename).resolve()
                if not target.is_relative_to(installed.resolve()):
                    raise RuntimeError(f'Unexpected archive member: {member.filename}')
                if (member.external_attr >> 16) & 0o170000 == 0o120000:
                    raise RuntimeError(f'Unexpected archive symlink: {member.filename}')
            package.extractall(DIRECTORY)
    launcher = installed / 'support/analyzeHeadless.bat'
    if not launcher.is_file():
        raise RuntimeError(f'Incomplete existing installation: {installed}; inspect before retrying')
    (DIRECTORY / 'ghidra-install.json').write_text(json.dumps(dict(
        archive_url=URL, sha256=SHA256, directory=str(installed),
        release_api='https://api.github.com/repos/NationalSecurityAgency/ghidra/releases/tags/Ghidra_12.1.4_build'), indent=2) + '\n')
    print(f'Ghidra archive SHA256 verified; installation: {installed}', flush=True)


if __name__ == '__main__':
    main()
