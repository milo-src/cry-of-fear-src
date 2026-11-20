
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008c9c0 <.text+0x8b9c0>:
1008c9c0:	56                   	push   esi
1008c9c1:	8b f1                	mov    esi,ecx
1008c9c3:	8b 06                	mov    eax,DWORD PTR [esi]
1008c9c5:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1008c9cb:	85 c0                	test   eax,eax
1008c9cd:	75 0b                	jne    0x1008c9da
1008c9cf:	56                   	push   esi
1008c9d0:	e8 2b cf 08 00       	call   0x10119900
1008c9d5:	83 c4 04             	add    esp,0x4
1008c9d8:	5e                   	pop    esi
1008c9d9:	c3                   	ret
1008c9da:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008c9dd:	83 c1 20             	add    ecx,0x20
1008c9e0:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1008c9e4:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
1008c9eb:	9f                   	lahf
1008c9ec:	f6 c4 44             	test   ah,0x44
1008c9ef:	7a 69                	jp     0x1008ca5a
1008c9f1:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
1008c9f6:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
1008c9fd:	9f                   	lahf
1008c9fe:	f6 c4 44             	test   ah,0x44
1008ca01:	7a 57                	jp     0x1008ca5a
1008ca03:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
1008ca08:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
1008ca0f:	9f                   	lahf
1008ca10:	f6 c4 44             	test   ah,0x44
1008ca13:	7a 45                	jp     0x1008ca5a
1008ca15:	8b 06                	mov    eax,DWORD PTR [esi]
1008ca17:	f3 0f 10 86 e8 00 00 	movss  xmm0,DWORD PTR [esi+0xe8]
1008ca1e:	00 
1008ca1f:	51                   	push   ecx
1008ca20:	8b ce                	mov    ecx,esi
1008ca22:	c7 46 78 50 ac 08 10 	mov    DWORD PTR [esi+0x78],0x1008ac50
1008ca29:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008ca2e:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008ca31:	83 be dc 00 00 00 ff 	cmp    DWORD PTR [esi+0xdc],0xffffffff
1008ca38:	74 2f                	je     0x1008ca69
1008ca3a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ca3d:	51                   	push   ecx
1008ca3e:	c7 04 24 00 00 c8 41 	mov    DWORD PTR [esp],0x41c80000
1008ca45:	83 c0 08             	add    eax,0x8
1008ca48:	68 80 01 00 00       	push   0x180
1008ca4d:	50                   	push   eax
1008ca4e:	6a 10                	push   0x10
1008ca50:	e8 cb 3d 07 00       	call   0x10100820
1008ca55:	83 c4 10             	add    esp,0x10
1008ca58:	5e                   	pop    esi
1008ca59:	c3                   	ret
1008ca5a:	8b 06                	mov    eax,DWORD PTR [esi]
1008ca5c:	51                   	push   ecx
1008ca5d:	8b ce                	mov    ecx,esi
1008ca5f:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
1008ca66:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008ca69:	5e                   	pop    esi
1008ca6a:	c3                   	ret
