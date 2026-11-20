
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fbb20 <.text+0xfab20>:
100fbb20:	55                   	push   ebp
100fbb21:	8b ec                	mov    ebp,esp
100fbb23:	57                   	push   edi
100fbb24:	8b f9                	mov    edi,ecx
100fbb26:	8b 87 98 03 00 00    	mov    eax,DWORD PTR [edi+0x398]
100fbb2c:	89 87 9c 03 00 00    	mov    DWORD PTR [edi+0x39c],eax
100fbb32:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fbb35:	c7 87 68 03 00 00 00 	mov    DWORD PTR [edi+0x368],0x0
100fbb3c:	00 00 00 
100fbb3f:	f6 80 a4 01 00 00 04 	test   BYTE PTR [eax+0x1a4],0x4
100fbb46:	75 14                	jne    0x100fbb5c
100fbb48:	8b 07                	mov    eax,DWORD PTR [edi]
100fbb4a:	51                   	push   ecx
100fbb4b:	c7 47 78 e0 28 10 10 	mov    DWORD PTR [edi+0x78],0x101028e0
100fbb52:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100fbb59:	ff 50 08             	call   DWORD PTR [eax+0x8]
100fbb5c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100fbb5f:	e8 cc e9 ff ff       	call   0x100fa530
100fbb64:	8b 07                	mov    eax,DWORD PTR [edi]
100fbb66:	8b cf                	mov    ecx,edi
100fbb68:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fbb6b:	ff 90 4c 02 00 00    	call   DWORD PTR [eax+0x24c]
100fbb71:	51                   	push   ecx
100fbb72:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100fbb79:	8b cf                	mov    ecx,edi
100fbb7b:	6a 03                	push   0x3
100fbb7d:	6a 00                	push   0x0
100fbb7f:	e8 ac 6d 00 00       	call   0x10102930
100fbb84:	5f                   	pop    edi
100fbb85:	5d                   	pop    ebp
100fbb86:	c2 04 00             	ret    0x4
