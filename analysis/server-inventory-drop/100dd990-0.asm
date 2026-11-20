
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dd990 <.text+0xdc990>:
100dd990:	55                   	push   ebp
100dd991:	8b ec                	mov    ebp,esp
100dd993:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
100dd997:	57                   	push   edi
100dd998:	8b f9                	mov    edi,ecx
100dd99a:	0f 84 87 00 00 00    	je     0x100dda27
100dd9a0:	80 bf 9c 1e 00 00 00 	cmp    BYTE PTR [edi+0x1e9c],0x0
100dd9a7:	53                   	push   ebx
100dd9a8:	56                   	push   esi
100dd9a9:	8d b7 1c 22 00 00    	lea    esi,[edi+0x221c]
100dd9af:	bb 01 00 00 00       	mov    ebx,0x1
100dd9b4:	74 3a                	je     0x100dd9f0
100dd9b6:	6a 00                	push   0x0
100dd9b8:	6a 00                	push   0x0
100dd9ba:	53                   	push   ebx
100dd9bb:	8b cf                	mov    ecx,edi
100dd9bd:	c7 46 e4 00 00 00 00 	mov    DWORD PTR [esi-0x1c],0x0
100dd9c4:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
100dd9ca:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
100dd9d1:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
100dd9d8:	e8 83 69 00 00       	call   0x100e4360
100dd9dd:	43                   	inc    ebx
100dd9de:	8d 76 04             	lea    esi,[esi+0x4]
100dd9e1:	83 fb 03             	cmp    ebx,0x3
100dd9e4:	7e d0                	jle    0x100dd9b6
100dd9e6:	5e                   	pop    esi
100dd9e7:	5b                   	pop    ebx
100dd9e8:	5f                   	pop    edi
100dd9e9:	5d                   	pop    ebp
100dd9ea:	c2 08 00             	ret    0x8
