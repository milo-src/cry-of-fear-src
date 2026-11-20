
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100070a0 <.text+0x60a0>:
100070a0:	53                   	push   ebx
100070a1:	8b dc                	mov    ebx,esp
100070a3:	83 ec 08             	sub    esp,0x8
100070a6:	83 e4 f0             	and    esp,0xfffffff0
100070a9:	83 c4 04             	add    esp,0x4
100070ac:	55                   	push   ebp
100070ad:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
100070b0:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
100070b4:	8b ec                	mov    ebp,esp
100070b6:	81 ec bc 00 00 00    	sub    esp,0xbc
100070bc:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100070c1:	33 c5                	xor    eax,ebp
100070c3:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100070c6:	56                   	push   esi
100070c7:	e8 c4 d8 ff ff       	call   0x10004990
100070cc:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100070d1:	0f 57 c9             	xorps  xmm1,xmm1
100070d4:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
100070d9:	0f 2f c1             	comiss xmm0,xmm1
100070dc:	76 0f                	jbe    0x100070ed
100070de:	c7 80 e0 00 00 00 ff 	mov    DWORD PTR [eax+0xe0],0xffffffff
100070e5:	ff ff ff 
100070e8:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100070ed:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
100070f4:	74 33                	je     0x10007129
100070f6:	83 c0 74             	add    eax,0x74
100070f9:	68 40 0c 22 10       	push   0x10220c40
100070fe:	50                   	push   eax
100070ff:	e8 4c c1 ff ff       	call   0x10003250
10007104:	83 c4 08             	add    esp,0x8
10007107:	85 c0                	test   eax,eax
10007109:	74 1e                	je     0x10007129
1000710b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007110:	83 c0 5c             	add    eax,0x5c
10007113:	68 40 0c 22 10       	push   0x10220c40
10007118:	50                   	push   eax
10007119:	e8 32 c1 ff ff       	call   0x10003250
1000711e:	83 c4 08             	add    esp,0x8
10007121:	85 c0                	test   eax,eax
10007123:	0f 85 27 03 00 00    	jne    0x10007450
10007129:	e8 52 d7 ff ff       	call   0x10004880
1000712e:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10007134:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
1000713a:	83 f8 05             	cmp    eax,0x5
1000713d:	74 15                	je     0x10007154
1000713f:	83 f8 0b             	cmp    eax,0xb
10007142:	74 10                	je     0x10007154
10007144:	83 f8 09             	cmp    eax,0x9
10007147:	74 0b                	je     0x10007154
10007149:	e8 82 c6 ff ff       	call   0x100037d0
1000714e:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10007154:	f3 0f 10 41 74       	movss  xmm0,DWORD PTR [ecx+0x74]
10007159:	f3 0f 58 41 5c       	addss  xmm0,DWORD PTR [ecx+0x5c]
1000715e:	f3 0f 11 41 5c       	movss  DWORD PTR [ecx+0x5c],xmm0
10007163:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007168:	f3 0f 10 40 78       	movss  xmm0,DWORD PTR [eax+0x78]
1000716d:	f3 0f 58 40 60       	addss  xmm0,DWORD PTR [eax+0x60]
10007172:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10007177:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000717c:	f3 0f 10 40 7c       	movss  xmm0,DWORD PTR [eax+0x7c]
10007181:	f3 0f 58 40 64       	addss  xmm0,DWORD PTR [eax+0x64]
10007186:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
1000718b:	e8 f0 d6 ff ff       	call   0x10004880
10007190:	8d 45 f0             	lea    eax,[ebp-0x10]
10007193:	50                   	push   eax
10007194:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007199:	51                   	push   ecx
1000719a:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1000719f:	83 c0 5c             	add    eax,0x5c
100071a2:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100071a7:	50                   	push   eax
100071a8:	e8 e3 c2 ff ff       	call   0x10003490
100071ad:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100071b2:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
100071b7:	f3 0f 5c 40 74       	subss  xmm0,DWORD PTR [eax+0x74]
100071bc:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
100071c1:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100071c6:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
100071cb:	f3 0f 5c 40 78       	subss  xmm0,DWORD PTR [eax+0x78]
100071d0:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
100071d5:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100071da:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
100071df:	f3 0f 5c 40 7c       	subss  xmm0,DWORD PTR [eax+0x7c]
100071e4:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
100071e9:	8d 45 f0             	lea    eax,[ebp-0x10]
100071ec:	50                   	push   eax
100071ed:	8d 85 48 ff ff ff    	lea    eax,[ebp-0xb8]
100071f3:	50                   	push   eax
100071f4:	e8 f7 1c 00 00       	call   0x10008ef0
100071f9:	83 c4 14             	add    esp,0x14
100071fc:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
100071ff:	0f 29 45 90          	movaps XMMWORD PTR [ebp-0x70],xmm0
10007203:	0f 29 45 a0          	movaps XMMWORD PTR [ebp-0x60],xmm0
10007207:	0f 10 40 10          	movups xmm0,XMMWORD PTR [eax+0x10]
1000720b:	0f 11 45 b0          	movups XMMWORD PTR [ebp-0x50],xmm0
1000720f:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
10007213:	0f 11 45 c0          	movups XMMWORD PTR [ebp-0x40],xmm0
10007217:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
1000721b:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
1000721e:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
10007221:	0f 11 45 d0          	movups XMMWORD PTR [ebp-0x30],xmm0
10007225:	e8 56 d6 ff ff       	call   0x10004880
1000722a:	83 7d 90 00          	cmp    DWORD PTR [ebp-0x70],0x0
1000722e:	74 57                	je     0x10007287
10007230:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10007236:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
10007239:	89 81 e0 00 00 00    	mov    DWORD PTR [ecx+0xe0],eax
1000723f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007244:	f3 0f 10 05 40 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c40
1000724b:	10 
1000724c:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10007251:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007256:	f3 0f 10 05 44 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c44
1000725d:	10 
1000725e:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10007263:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007268:	f3 0f 10 05 48 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c48
1000726f:	10 
10007270:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10007275:	5e                   	pop    esi
10007276:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10007279:	33 cd                	xor    ecx,ebp
1000727b:	e8 33 69 13 00       	call   0x1013dbb3
10007280:	8b e5                	mov    esp,ebp
10007282:	5d                   	pop    ebp
10007283:	8b e3                	mov    esp,ebx
10007285:	5b                   	pop    ebx
10007286:	c3                   	ret
10007287:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1000728e:	10 
1000728f:	f3 0f 10 4d b0       	movss  xmm1,DWORD PTR [ebp-0x50]
10007294:	0f 2e c8             	ucomiss xmm1,xmm0
10007297:	9f                   	lahf
10007298:	f6 c4 44             	test   ah,0x44
1000729b:	0f 8b aa 01 00 00    	jnp    0x1000744b
100072a1:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100072a6:	8b 88 dc 00 00 00    	mov    ecx,DWORD PTR [eax+0xdc]
100072ac:	83 f9 0a             	cmp    ecx,0xa
100072af:	75 1d                	jne    0x100072ce
100072b1:	f3 0f 10 80 c4 00 00 	movss  xmm0,DWORD PTR [eax+0xc4]
100072b8:	00 
100072b9:	f2 0f 10 0d 98 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e98
100072c0:	10 
100072c1:	0f 5a c0             	cvtps2pd xmm0,xmm0
100072c4:	f2 0f 5c c8          	subsd  xmm1,xmm0
100072c8:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100072cc:	eb 0d                	jmp    0x100072db
100072ce:	83 f9 0b             	cmp    ecx,0xb
100072d1:	75 08                	jne    0x100072db
100072d3:	f3 0f 10 05 80 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1380
100072da:	10 
100072db:	51                   	push   ecx
100072dc:	83 c0 5c             	add    eax,0x5c
100072df:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100072e4:	50                   	push   eax
100072e5:	8d 4d c0             	lea    ecx,[ebp-0x40]
100072e8:	51                   	push   ecx
100072e9:	50                   	push   eax
100072ea:	e8 c1 db ff ff       	call   0x10004eb0
100072ef:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
100072f4:	83 c4 10             	add    esp,0x10
100072f7:	0f 5a c0             	cvtps2pd xmm0,xmm0
100072fa:	66 0f 2f 05 58 1e 1a 	comisd xmm0,QWORD PTR ds:0x101a1e58
10007301:	10 
10007302:	0f 86 43 01 00 00    	jbe    0x1000744b
10007308:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000730e:	8b 55 d0             	mov    edx,DWORD PTR [ebp-0x30]
10007311:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
10007317:	f3 0f 10 51 64       	movss  xmm2,DWORD PTR [ecx+0x64]
1000731c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10007320:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
10007325:	0f 2f c2             	comiss xmm0,xmm2
10007328:	76 1b                	jbe    0x10007345
1000732a:	89 91 e0 00 00 00    	mov    DWORD PTR [ecx+0xe0],edx
10007330:	0f 57 d2             	xorps  xmm2,xmm2
10007333:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007338:	c7 40 64 00 00 00 00 	mov    DWORD PTR [eax+0x64],0x0
1000733f:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10007345:	f3 0f 10 41 60       	movss  xmm0,DWORD PTR [ecx+0x60]
1000734a:	8d 71 5c             	lea    esi,[ecx+0x5c]
1000734d:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
10007351:	f3 0f 59 c9          	mulss  xmm1,xmm1
10007355:	f3 0f 59 c0          	mulss  xmm0,xmm0
10007359:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000735d:	f3 0f 58 c8          	addss  xmm1,xmm0
10007361:	f3 0f 10 05 40 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f40
10007368:	10 
10007369:	f3 0f 58 ca          	addss  xmm1,xmm2
1000736d:	0f 2f c1             	comiss xmm0,xmm1
10007370:	77 61                	ja     0x100073d3
10007372:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
10007378:	83 f8 0a             	cmp    eax,0xa
1000737b:	74 05                	je     0x10007382
1000737d:	83 f8 0b             	cmp    eax,0xb
10007380:	75 51                	jne    0x100073d3
10007382:	f3 0f 10 45 b0       	movss  xmm0,DWORD PTR [ebp-0x50]
10007387:	8d 45 f0             	lea    eax,[ebp-0x10]
1000738a:	f2 0f 10 0d 78 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e78
10007391:	10 
10007392:	0f 5a c0             	cvtps2pd xmm0,xmm0
10007395:	50                   	push   eax
10007396:	51                   	push   ecx
10007397:	f2 0f 5c c8          	subsd  xmm1,xmm0
1000739b:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100073a0:	0f 5a c0             	cvtps2pd xmm0,xmm0
100073a3:	f2 0f 59 c8          	mulsd  xmm1,xmm0
100073a7:	f2 0f 59 0d 70 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e70
100073ae:	10 
100073af:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100073b3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100073b8:	56                   	push   esi
100073b9:	e8 d2 c0 ff ff       	call   0x10003490
100073be:	8d 45 f0             	lea    eax,[ebp-0x10]
100073c1:	50                   	push   eax
100073c2:	8d 85 48 ff ff ff    	lea    eax,[ebp-0xb8]
100073c8:	50                   	push   eax
100073c9:	e8 22 1b 00 00       	call   0x10008ef0
100073ce:	83 c4 14             	add    esp,0x14
100073d1:	eb 3c                	jmp    0x1000740f
100073d3:	89 91 e0 00 00 00    	mov    DWORD PTR [ecx+0xe0],edx
100073d9:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100073de:	f3 0f 10 05 40 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c40
100073e5:	10 
100073e6:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
100073eb:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100073f0:	f3 0f 10 05 44 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c44
100073f7:	10 
100073f8:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
100073fd:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007402:	f3 0f 10 05 48 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c48
10007409:	10 
1000740a:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
1000740f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007414:	0f 57 c9             	xorps  xmm1,xmm1
10007417:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
1000741c:	f3 0f 5c c1          	subss  xmm0,xmm1
10007420:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10007425:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000742a:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
1000742f:	f3 0f 5c c1          	subss  xmm0,xmm1
10007433:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10007438:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000743d:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10007442:	f3 0f 5c c1          	subss  xmm0,xmm1
10007446:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
1000744b:	e8 40 d5 ff ff       	call   0x10004990
10007450:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10007453:	33 cd                	xor    ecx,ebp
10007455:	5e                   	pop    esi
10007456:	e8 58 67 13 00       	call   0x1013dbb3
1000745b:	8b e5                	mov    esp,ebp
1000745d:	5d                   	pop    ebp
1000745e:	8b e3                	mov    esp,ebx
10007460:	5b                   	pop    ebx
10007461:	c3                   	ret
