
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020dc0 <.text+0x1fdc0>:
10020dc0:	55                   	push   ebp
10020dc1:	8b ec                	mov    ebp,esp
10020dc3:	83 ec 18             	sub    esp,0x18
10020dc6:	56                   	push   esi
10020dc7:	8b f1                	mov    esi,ecx
10020dc9:	8b 06                	mov    eax,DWORD PTR [esi]
10020dcb:	ff 50 30             	call   DWORD PTR [eax+0x30]
10020dce:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020dd1:	68 f4 9a 1a 10       	push   0x101a9af4
10020dd6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10020ddc:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10020de2:	8d 45 f4             	lea    eax,[ebp-0xc]
10020de5:	c7 45 f4 00 00 80 41 	mov    DWORD PTR [ebp-0xc],0x41800000
10020dec:	50                   	push   eax
10020ded:	8d 45 e8             	lea    eax,[ebp-0x18]
10020df0:	c7 45 f8 00 00 80 41 	mov    DWORD PTR [ebp-0x8],0x41800000
10020df7:	50                   	push   eax
10020df8:	ff 76 04             	push   DWORD PTR [esi+0x4]
10020dfb:	c7 45 fc 00 00 10 42 	mov    DWORD PTR [ebp-0x4],0x42100000
10020e02:	c7 45 e8 00 00 80 c1 	mov    DWORD PTR [ebp-0x18],0xc1800000
10020e09:	c7 45 ec 00 00 80 c1 	mov    DWORD PTR [ebp-0x14],0xc1800000
10020e10:	c7 45 f0 00 00 10 c2 	mov    DWORD PTR [ebp-0x10],0xc2100000
10020e17:	e8 14 92 0f 00       	call   0x1011a030
10020e1c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020e1f:	83 c4 14             	add    esp,0x14
10020e22:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10020e29:	00 00 00 
10020e2c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020e2f:	c7 80 08 01 00 00 08 	mov    DWORD PTR [eax+0x108],0x8
10020e36:	00 00 00 
10020e39:	c7 86 1c 03 00 00 ff 	mov    DWORD PTR [esi+0x31c],0xffffffff
10020e40:	ff ff ff 
10020e43:	c7 86 24 02 00 00 00 	mov    DWORD PTR [esi+0x224],0x0
10020e4a:	00 00 00 
10020e4d:	c7 86 80 00 00 00 c0 	mov    DWORD PTR [esi+0x80],0x100206c0
10020e54:	06 02 10 
10020e57:	5e                   	pop    esi
10020e58:	8b e5                	mov    esp,ebp
10020e5a:	5d                   	pop    ebp
10020e5b:	c3                   	ret
