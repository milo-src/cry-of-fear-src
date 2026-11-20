
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016a80 <.text+0x15a80>:
10016a80:	55                   	push   ebp
10016a81:	8b ec                	mov    ebp,esp
10016a83:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10016a86:	85 c9                	test   ecx,ecx
10016a88:	74 05                	je     0x10016a8f
10016a8a:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
10016a8d:	eb 02                	jmp    0x10016a91
10016a8f:	33 c9                	xor    ecx,ecx
10016a91:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10016a94:	85 c0                	test   eax,eax
10016a96:	74 05                	je     0x10016a9d
10016a98:	8b 50 7c             	mov    edx,DWORD PTR [eax+0x7c]
10016a9b:	eb 02                	jmp    0x10016a9f
10016a9d:	33 d2                	xor    edx,edx
10016a9f:	85 c9                	test   ecx,ecx
10016aa1:	74 09                	je     0x10016aac
10016aa3:	8b 01                	mov    eax,DWORD PTR [ecx]
10016aa5:	52                   	push   edx
10016aa6:	ff 90 ec 00 00 00    	call   DWORD PTR [eax+0xec]
10016aac:	5d                   	pop    ebp
10016aad:	c3                   	ret
