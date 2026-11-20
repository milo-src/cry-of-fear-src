
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d220 <.text+0x11c220>:
1011d220:	56                   	push   esi
1011d221:	8b f1                	mov    esi,ecx
1011d223:	51                   	push   ecx
1011d224:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011d22b:	8b 06                	mov    eax,DWORD PTR [esi]
1011d22d:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011d230:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d233:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
1011d23a:	02 00 00 
1011d23d:	74 19                	je     0x1011d258
1011d23f:	c7 40 50 00 00 00 00 	mov    DWORD PTR [eax+0x50],0x0
1011d246:	8b ce                	mov    ecx,esi
1011d248:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d24b:	5e                   	pop    esi
1011d24c:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
1011d253:	e9 68 0f 00 00       	jmp    0x1011e1c0
1011d258:	5e                   	pop    esi
1011d259:	c3                   	ret
