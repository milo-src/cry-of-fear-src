
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004e160 <.text+0x4d160>:
1004e160:	55                   	push   ebp
1004e161:	8b ec                	mov    ebp,esp
1004e163:	51                   	push   ecx
1004e164:	56                   	push   esi
1004e165:	8b f1                	mov    esi,ecx
1004e167:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e16a:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
1004e171:	75 52                	jne    0x1004e1c5
1004e173:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004e178:	83 ec 18             	sub    esp,0x18
1004e17b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e17e:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
1004e184:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
1004e189:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e18c:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
1004e192:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1004e197:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e19a:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1004e19f:	68 2c 18 1b 10       	push   0x101b182c
1004e1a4:	6a 04                	push   0x4
1004e1a6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004e1ac:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e1af:	56                   	push   esi
1004e1b0:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1004e1b7:	00 00 00 
1004e1ba:	e8 41 b7 0c 00       	call   0x10119900
1004e1bf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e1c2:	83 c4 24             	add    esp,0x24
1004e1c5:	c7 80 60 01 00 00 63 	mov    DWORD PTR [eax+0x160],0x63
1004e1cc:	00 00 00 
1004e1cf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e1d2:	83 b8 b8 00 00 00 00 	cmp    DWORD PTR [eax+0xb8],0x0
1004e1d9:	75 45                	jne    0x1004e220
1004e1db:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1004e1e0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004e1e5:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004e1e8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004e1ee:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
1004e1f4:	8b ce                	mov    ecx,esi
1004e1f6:	50                   	push   eax
1004e1f7:	68 58 18 1b 10       	push   0x101b1858
1004e1fc:	e8 ef f9 ff ff       	call   0x1004dbf0
1004e201:	50                   	push   eax
1004e202:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1004e208:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004e20b:	83 c4 04             	add    esp,0x4
1004e20e:	89 81 b8 00 00 00    	mov    DWORD PTR [ecx+0xb8],eax
1004e214:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e217:	83 b8 b8 00 00 00 00 	cmp    DWORD PTR [eax+0xb8],0x0
1004e21e:	74 c0                	je     0x1004e1e0
1004e220:	8b 06                	mov    eax,DWORD PTR [esi]
1004e222:	8b ce                	mov    ecx,esi
1004e224:	ff 50 30             	call   DWORD PTR [eax+0x30]
1004e227:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004e22a:	8b 91 b8 00 00 00    	mov    edx,DWORD PTR [ecx+0xb8]
1004e230:	85 d2                	test   edx,edx
1004e232:	74 1f                	je     0x1004e253
1004e234:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004e239:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004e23f:	03 c2                	add    eax,edx
1004e241:	50                   	push   eax
1004e242:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1004e248:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1004e24e:	83 c4 08             	add    esp,0x8
1004e251:	eb 4f                	jmp    0x1004e2a2
1004e253:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
1004e258:	83 ec 18             	sub    esp,0x18
1004e25b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e25e:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
1004e264:	f3 0f 10 41 0c       	movss  xmm0,DWORD PTR [ecx+0xc]
1004e269:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e26c:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
1004e272:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
1004e277:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004e27a:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1004e27f:	68 60 18 1b 10       	push   0x101b1860
1004e284:	6a 04                	push   0x4
1004e286:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004e28c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e28f:	56                   	push   esi
1004e290:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1004e297:	00 00 00 
1004e29a:	e8 61 b6 0c 00       	call   0x10119900
1004e29f:	83 c4 24             	add    esp,0x24
1004e2a2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e2a5:	83 c0 08             	add    eax,0x8
1004e2a8:	50                   	push   eax
1004e2a9:	56                   	push   esi
1004e2aa:	e8 31 bd 0c 00       	call   0x10119fe0
1004e2af:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e2b2:	83 c4 08             	add    esp,0x8
1004e2b5:	8b ce                	mov    ecx,esi
1004e2b7:	c7 80 0c 01 00 00 02 	mov    DWORD PTR [eax+0x10c],0x2
1004e2be:	00 00 00 
1004e2c1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e2c4:	c7 80 08 01 00 00 06 	mov    DWORD PTR [eax+0x108],0x6
1004e2cb:	00 00 00 
1004e2ce:	e8 0d 9e fc ff       	call   0x100180e0
1004e2d3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e2d6:	c7 86 80 00 00 00 d0 	mov    DWORD PTR [esi+0x80],0x1004ded0
1004e2dd:	de 04 10 
1004e2e0:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1004e2e7:	74 39                	je     0x1004e322
1004e2e9:	68 18 88 1a 10       	push   0x101a8818
1004e2ee:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1004e2f4:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1004e2f7:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1004e2fc:	83 c4 04             	add    esp,0x4
1004e2ff:	0f 2e 05 b8 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1eb8
1004e306:	9f                   	lahf
1004e307:	f6 c4 44             	test   ah,0x44
1004e30a:	7b 16                	jnp    0x1004e322
1004e30c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e30f:	56                   	push   esi
1004e310:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1004e317:	00 00 00 
1004e31a:	e8 e1 b5 0c 00       	call   0x10119900
1004e31f:	83 c4 04             	add    esp,0x4
1004e322:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e325:	5e                   	pop    esi
1004e326:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
1004e32d:	74 0a                	je     0x1004e339
1004e32f:	c7 80 48 02 00 00 03 	mov    DWORD PTR [eax+0x248],0x3
1004e336:	00 00 00 
1004e339:	8b e5                	mov    esp,ebp
1004e33b:	5d                   	pop    ebp
1004e33c:	c3                   	ret
1004e33d:	cc                   	int3
1004e33e:	cc                   	int3
1004e33f:	cc                   	int3
1004e340:	e9 4b f8 ff ff       	jmp    0x1004db90
1004e345:	cc                   	int3
1004e346:	cc                   	int3
1004e347:	cc                   	int3
1004e348:	cc                   	int3
1004e349:	cc                   	int3
1004e34a:	cc                   	int3
1004e34b:	cc                   	int3
1004e34c:	cc                   	int3
1004e34d:	cc                   	int3
1004e34e:	cc                   	int3
1004e34f:	cc                   	int3
