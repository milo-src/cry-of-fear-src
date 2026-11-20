
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020cb0 <.text+0x1fcb0>:
10020cb0:	55                   	push   ebp
10020cb1:	8b ec                	mov    ebp,esp
10020cb3:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10020cb7:	56                   	push   esi
10020cb8:	8b f1                	mov    esi,ecx
10020cba:	74 14                	je     0x10020cd0
10020cbc:	8b 06                	mov    eax,DWORD PTR [esi]
10020cbe:	51                   	push   ecx
10020cbf:	c7 04 24 cd cc 4c 3d 	mov    DWORD PTR [esp],0x3d4ccccd
10020cc6:	ff 50 08             	call   DWORD PTR [eax+0x8]
10020cc9:	c7 46 78 20 0f 02 10 	mov    DWORD PTR [esi+0x78],0x10020f20
10020cd0:	5e                   	pop    esi
10020cd1:	5d                   	pop    ebp
10020cd2:	c2 10 00             	ret    0x10
