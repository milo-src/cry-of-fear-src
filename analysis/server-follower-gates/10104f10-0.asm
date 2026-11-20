
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104f10 <.text+0x103f10>:
10104f10:	56                   	push   esi
10104f11:	8d b1 8c 01 00 00    	lea    esi,[ecx+0x18c]
10104f17:	8b ce                	mov    ecx,esi
10104f19:	e8 62 28 f1 ff       	call   0x10017780
10104f1e:	85 c0                	test   eax,eax
10104f20:	74 1c                	je     0x10104f3e
10104f22:	8b ce                	mov    ecx,esi
10104f24:	e8 77 28 f1 ff       	call   0x100177a0
10104f29:	8b c8                	mov    ecx,eax
10104f2b:	8b 10                	mov    edx,DWORD PTR [eax]
10104f2d:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
10104f33:	85 c0                	test   eax,eax
10104f35:	74 07                	je     0x10104f3e
10104f37:	b8 01 00 00 00       	mov    eax,0x1
10104f3c:	5e                   	pop    esi
10104f3d:	c3                   	ret
10104f3e:	33 c0                	xor    eax,eax
10104f40:	5e                   	pop    esi
10104f41:	c3                   	ret
