
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009cbe0 <.text+0x9bbe0>:
1009cbe0:	56                   	push   esi
1009cbe1:	8b f1                	mov    esi,ecx
1009cbe3:	8b 06                	mov    eax,DWORD PTR [esi]
1009cbe5:	ff 50 30             	call   DWORD PTR [eax+0x30]
1009cbe8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009cbeb:	68 c0 92 1c 10       	push   0x101c92c0
1009cbf0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1009cbf6:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1009cbfc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009cbff:	83 c0 08             	add    eax,0x8
1009cc02:	50                   	push   eax
1009cc03:	56                   	push   esi
1009cc04:	e8 d7 d3 07 00       	call   0x10119fe0
1009cc09:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009cc0c:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1009cc11:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1009cc18:	10 
1009cc19:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1009cc1e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009cc21:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1009cc27:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
1009cc2d:	83 c4 14             	add    esp,0x14
1009cc30:	8b ce                	mov    ecx,esi
1009cc32:	68 e4 92 1c 10       	push   0x101c92e4
1009cc37:	e8 74 1d f7 ff       	call   0x1000e9b0
1009cc3c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009cc3f:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
1009cc45:	8b ce                	mov    ecx,esi
1009cc47:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009cc4a:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
1009cc51:	00 00 00 
1009cc54:	e8 87 1d f7 ff       	call   0x1000e9e0
1009cc59:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009cc5c:	c7 86 80 00 00 00 f0 	mov    DWORD PTR [esi+0x80],0x100931f0
1009cc63:	31 09 10 
1009cc66:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1009cc6b:	51                   	push   ecx
1009cc6c:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1009cc73:	8b 00                	mov    eax,DWORD PTR [eax]
1009cc75:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
1009cc7b:	8b ce                	mov    ecx,esi
1009cc7d:	8b 06                	mov    eax,DWORD PTR [esi]
1009cc7f:	ff 50 08             	call   DWORD PTR [eax+0x8]
1009cc82:	5e                   	pop    esi
1009cc83:	c3                   	ret
