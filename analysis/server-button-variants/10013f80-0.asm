
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013f80 <.text+0x12f80>:
10013f80:	56                   	push   esi
10013f81:	8b f1                	mov    esi,ecx
10013f83:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
10013f86:	85 c9                	test   ecx,ecx
10013f88:	74 05                	je     0x10013f8f
10013f8a:	8b 01                	mov    eax,DWORD PTR [ecx]
10013f8c:	ff 50 40             	call   DWORD PTR [eax+0x40]
10013f8f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10013f92:	5e                   	pop    esi
10013f93:	0f b6 80 a4 01 00 00 	movzx  eax,BYTE PTR [eax+0x1a4]
10013f9a:	83 e0 01             	and    eax,0x1
10013f9d:	c1 e0 03             	shl    eax,0x3
10013fa0:	c3                   	ret
