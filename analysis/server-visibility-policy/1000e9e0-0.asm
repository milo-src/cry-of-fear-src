
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e9e0 <.text+0xd9e0>:
1000e9e0:	56                   	push   esi
1000e9e1:	8b f1                	mov    esi,ecx
1000e9e3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000e9e6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000e9ec:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1000e9f2:	8d 96 f0 00 00 00    	lea    edx,[esi+0xf0]
1000e9f8:	52                   	push   edx
1000e9f9:	8d 8e ec 00 00 00    	lea    ecx,[esi+0xec]
1000e9ff:	51                   	push   ecx
1000ea00:	ff 76 04             	push   DWORD PTR [esi+0x4]
1000ea03:	50                   	push   eax
1000ea04:	e8 87 08 00 00       	call   0x1000f290
1000ea09:	83 c4 14             	add    esp,0x14
1000ea0c:	8b ce                	mov    ecx,esi
1000ea0e:	e8 9d fe ff ff       	call   0x1000e8b0
1000ea13:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000ea16:	83 e0 01             	and    eax,0x1
1000ea19:	89 86 fc 00 00 00    	mov    DWORD PTR [esi+0xfc],eax
1000ea1f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ea24:	8b 00                	mov    eax,DWORD PTR [eax]
1000ea26:	89 81 38 01 00 00    	mov    DWORD PTR [ecx+0x138],eax
1000ea2c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000ea2f:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x3f800000
1000ea36:	00 80 3f 
1000ea39:	c7 86 f8 00 00 00 00 	mov    DWORD PTR [esi+0xf8],0x0
1000ea40:	00 00 00 
1000ea43:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ea48:	8b 00                	mov    eax,DWORD PTR [eax]
1000ea4a:	89 86 f4 00 00 00    	mov    DWORD PTR [esi+0xf4],eax
1000ea50:	5e                   	pop    esi
1000ea51:	c3                   	ret
