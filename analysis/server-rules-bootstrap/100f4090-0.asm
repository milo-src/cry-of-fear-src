
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f4090 <.text+0xf3090>:
100f4090:	53                   	push   ebx
100f4091:	8b dc                	mov    ebx,esp
100f4093:	83 ec 08             	sub    esp,0x8
100f4096:	83 e4 f0             	and    esp,0xfffffff0
100f4099:	83 c4 04             	add    esp,0x4
100f409c:	55                   	push   ebp
100f409d:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
100f40a0:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
100f40a4:	8b ec                	mov    ebp,esp
100f40a6:	81 ec 48 01 00 00    	sub    esp,0x148
100f40ac:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100f40b1:	33 c5                	xor    eax,ebp
100f40b3:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f40b6:	56                   	push   esi
100f40b7:	57                   	push   edi
100f40b8:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100f40be:	8b f9                	mov    edi,ecx
100f40c0:	50                   	push   eax
100f40c1:	e8 7a be fe ff       	call   0x100dff40
100f40c6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f40cb:	b9 30 21 1a 10       	mov    ecx,0x101a2130
100f40d0:	83 c4 04             	add    esp,0x4
100f40d3:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f40d7:	f3 0f 11 05 78 64 22 	movss  DWORD PTR ds:0x10226478,xmm0
100f40de:	10 
100f40df:	0f 57 c0             	xorps  xmm0,xmm0
100f40e2:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100f40e8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f40eb:	6a 64                	push   0x64
100f40ed:	0f 29 85 c0 fe ff ff 	movaps XMMWORD PTR [ebp-0x140],xmm0
100f40f4:	89 08                	mov    DWORD PTR [eax],ecx
100f40f6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f40f9:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x42c80000
100f4100:	00 c8 42 
100f4103:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4106:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
100f410d:	00 00 00 
100f4110:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4113:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x40000000
100f411a:	00 00 40 
100f411d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4120:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
100f4127:	00 00 00 
100f412a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f412d:	c7 80 08 01 00 00 03 	mov    DWORD PTR [eax+0x108],0x3
100f4134:	00 00 00 
100f4137:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f413a:	8b 81 64 01 00 00    	mov    eax,DWORD PTR [ecx+0x164]
100f4140:	89 81 b4 01 00 00    	mov    DWORD PTR [ecx+0x1b4],eax
100f4146:	8b cf                	mov    ecx,edi
100f4148:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f414b:	81 a0 a8 01 00 00 00 	and    DWORD PTR [eax+0x1a8],0x100000
100f4152:	00 10 00 
100f4155:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4158:	83 88 a8 01 00 00 08 	or     DWORD PTR [eax+0x1a8],0x8
100f415f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4162:	c7 80 e4 01 00 00 00 	mov    DWORD PTR [eax+0x1e4],0x40000000
100f4169:	00 00 40 
100f416c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f416f:	c7 80 18 01 00 00 00 	mov    DWORD PTR [eax+0x118],0x0
100f4176:	00 00 00 
100f4179:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f417c:	c7 80 74 01 00 00 00 	mov    DWORD PTR [eax+0x174],0x0
100f4183:	00 00 00 
100f4186:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4189:	c7 80 dc 01 00 00 00 	mov    DWORD PTR [eax+0x1dc],0x0
100f4190:	00 00 00 
100f4193:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4196:	c7 80 e0 01 00 00 00 	mov    DWORD PTR [eax+0x1e0],0x0
100f419d:	00 00 00 
100f41a0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f41a3:	c7 80 20 01 00 00 00 	mov    DWORD PTR [eax+0x120],0x3f800000
100f41aa:	00 80 3f 
100f41ad:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f41b0:	c7 80 1c 01 00 00 00 	mov    DWORD PTR [eax+0x11c],0x3f800000
100f41b7:	00 80 3f 
100f41ba:	c7 87 c8 24 00 00 ff 	mov    DWORD PTR [edi+0x24c8],0xffffffff
100f41c1:	ff ff ff 
100f41c4:	c7 87 0c 03 00 00 00 	mov    DWORD PTR [edi+0x30c],0x0
100f41cb:	00 00 00 
100f41ce:	c7 87 e4 22 00 00 00 	mov    DWORD PTR [edi+0x22e4],0x0
100f41d5:	00 00 00 
100f41d8:	c7 87 ec 24 00 00 00 	mov    DWORD PTR [edi+0x24ec],0x0
100f41df:	00 00 00 
100f41e2:	c7 87 18 1f 00 00 ff 	mov    DWORD PTR [edi+0x1f18],0xffffffff
100f41e9:	ff ff ff 
100f41ec:	c7 87 10 23 00 00 00 	mov    DWORD PTR [edi+0x2310],0x0
100f41f3:	00 00 00 
100f41f6:	c7 87 18 23 00 00 00 	mov    DWORD PTR [edi+0x2318],0x0
100f41fd:	00 00 00 
100f4200:	c7 87 20 23 00 00 00 	mov    DWORD PTR [edi+0x2320],0x0
100f4207:	00 00 00 
100f420a:	c6 87 1c 23 00 00 00 	mov    BYTE PTR [edi+0x231c],0x0
100f4211:	e8 ca f7 ff ff       	call   0x100f39e0
100f4216:	6a 01                	push   0x1
100f4218:	6a 01                	push   0x1
100f421a:	8b cf                	mov    ecx,edi
100f421c:	c7 87 dc 27 00 00 00 	mov    DWORD PTR [edi+0x27dc],0x0
100f4223:	00 00 00 
100f4226:	c7 87 e0 27 00 00 00 	mov    DWORD PTR [edi+0x27e0],0x0
100f422d:	00 00 00 
100f4230:	c7 87 e4 27 00 00 00 	mov    DWORD PTR [edi+0x27e4],0x0
100f4237:	00 00 00 
100f423a:	c7 87 e8 27 00 00 00 	mov    DWORD PTR [edi+0x27e8],0x0
100f4241:	00 00 00 
100f4244:	c7 87 ec 27 00 00 00 	mov    DWORD PTR [edi+0x27ec],0x0
100f424b:	00 00 00 
100f424e:	c7 87 f0 27 00 00 00 	mov    DWORD PTR [edi+0x27f0],0x0
100f4255:	00 00 00 
100f4258:	c7 87 f4 27 00 00 00 	mov    DWORD PTR [edi+0x27f4],0x0
100f425f:	00 00 00 
100f4262:	c7 87 f8 27 00 00 00 	mov    DWORD PTR [edi+0x27f8],0x0
100f4269:	00 00 00 
100f426c:	c7 87 fc 27 00 00 00 	mov    DWORD PTR [edi+0x27fc],0x0
100f4273:	00 00 00 
100f4276:	c7 87 00 28 00 00 00 	mov    DWORD PTR [edi+0x2800],0x0
100f427d:	00 00 00 
100f4280:	c7 87 04 28 00 00 00 	mov    DWORD PTR [edi+0x2804],0x0
100f4287:	00 00 00 
100f428a:	c7 87 08 28 00 00 00 	mov    DWORD PTR [edi+0x2808],0x0
100f4291:	00 00 00 
100f4294:	e8 f7 96 fe ff       	call   0x100dd990
100f4299:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f429c:	c7 87 a8 1e 00 00 00 	mov    DWORD PTR [edi+0x1ea8],0x0
100f42a3:	00 00 00 
100f42a6:	c7 80 74 02 00 00 00 	mov    DWORD PTR [eax+0x274],0x42b40000
100f42ad:	00 b4 42 
100f42b0:	c7 87 78 1e 00 00 00 	mov    DWORD PTR [edi+0x1e78],0x0
100f42b7:	00 00 00 
100f42ba:	c7 87 7c 1e 00 00 00 	mov    DWORD PTR [edi+0x1e7c],0x0
100f42c1:	00 00 00 
100f42c4:	66 c7 87 80 1e 00 00 	mov    WORD PTR [edi+0x1e80],0x0
100f42cb:	00 00 
100f42cd:	6a 00                	push   0x0
100f42cf:	8d 8f 98 26 00 00    	lea    ecx,[edi+0x2698]
100f42d5:	c7 87 14 23 00 00 01 	mov    DWORD PTR [edi+0x2314],0x1
100f42dc:	00 00 00 
100f42df:	e8 5c 34 f2 ff       	call   0x10017740
100f42e4:	6a 00                	push   0x0
100f42e6:	8d 8f a0 26 00 00    	lea    ecx,[edi+0x26a0]
100f42ec:	e8 4f 34 f2 ff       	call   0x10017740
100f42f1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f42f6:	8b 00                	mov    eax,DWORD PTR [eax]
100f42f8:	89 87 ac 26 00 00    	mov    DWORD PTR [edi+0x26ac],eax
100f42fe:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f4303:	8b 00                	mov    eax,DWORD PTR [eax]
100f4305:	89 87 e8 03 00 00    	mov    DWORD PTR [edi+0x3e8],eax
100f430b:	c7 87 2c 1f 00 00 00 	mov    DWORD PTR [edi+0x1f2c],0x0
100f4312:	00 00 00 
100f4315:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f431a:	8b 00                	mov    eax,DWORD PTR [eax]
100f431c:	89 87 d0 03 00 00    	mov    DWORD PTR [edi+0x3d0],eax
100f4322:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f4328:	85 c9                	test   ecx,ecx
100f432a:	74 6b                	je     0x100f4397
100f432c:	8b 01                	mov    eax,DWORD PTR [ecx]
100f432e:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100f4331:	ff d0                	call   eax
100f4333:	85 c0                	test   eax,eax
100f4335:	74 60                	je     0x100f4397
100f4337:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f433c:	be 01 00 00 00       	mov    esi,0x1
100f4341:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100f4347:	7c 4e                	jl     0x100f4397
100f4349:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100f4350:	56                   	push   esi
100f4351:	e8 2a 53 02 00       	call   0x10119680
100f4356:	83 c4 04             	add    esp,0x4
100f4359:	85 c0                	test   eax,eax
100f435b:	74 04                	je     0x100f4361
100f435d:	3b c7                	cmp    eax,edi
100f435f:	74 10                	je     0x100f4371
100f4361:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f4366:	46                   	inc    esi
100f4367:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100f436d:	7e e1                	jle    0x100f4350
100f436f:	eb 26                	jmp    0x100f4397
100f4371:	6b c6 32             	imul   eax,esi,0x32
100f4374:	89 87 c4 03 00 00    	mov    DWORD PTR [edi+0x3c4],eax
100f437a:	3d 68 01 00 00       	cmp    eax,0x168
100f437f:	7c 16                	jl     0x100f4397
100f4381:	68 5e 01 00 00       	push   0x15e
100f4386:	6a 00                	push   0x0
100f4388:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f438e:	83 c4 08             	add    esp,0x8
100f4391:	89 87 c4 03 00 00    	mov    DWORD PTR [edi+0x3c4],eax
100f4397:	68 b4 b6 1c 10       	push   0x101cb6b4
100f439c:	c7 87 dc 04 00 00 00 	mov    DWORD PTR [edi+0x4dc],0x0
100f43a3:	00 00 00 
100f43a6:	c6 87 a8 03 00 00 00 	mov    BYTE PTR [edi+0x3a8],0x0
100f43ad:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f43b3:	8b f0                	mov    esi,eax
100f43b5:	83 c4 04             	add    esp,0x4
100f43b8:	8b d6                	mov    edx,esi
100f43ba:	8d 42 01             	lea    eax,[edx+0x1]
100f43bd:	0f 1f 00             	nop    DWORD PTR [eax]
100f43c0:	8a 0a                	mov    cl,BYTE PTR [edx]
100f43c2:	42                   	inc    edx
100f43c3:	84 c9                	test   cl,cl
100f43c5:	75 f9                	jne    0x100f43c0
100f43c7:	2b d0                	sub    edx,eax
100f43c9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f43cc:	83 fa 02             	cmp    edx,0x2
100f43cf:	76 03                	jbe    0x100f43d4
100f43d1:	56                   	push   esi
100f43d2:	eb 05                	jmp    0x100f43d9
100f43d4:	68 34 12 1a 10       	push   0x101a1234
100f43d9:	68 f0 13 1a 10       	push   0x101a13f0
100f43de:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f43e4:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f43ea:	83 c4 0c             	add    esp,0xc
100f43ed:	c6 05 75 64 22 10 01 	mov    BYTE PTR ds:0x10226475,0x1
100f43f4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f43f7:	68 78 63 1d 10       	push   0x101d6378
100f43fc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f4402:	ff 15 ec 2f 22 10    	call   DWORD PTR ds:0x10222fec
100f4408:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f440b:	68 34 12 1a 10       	push   0x101a1234
100f4410:	68 74 1d 1a 10       	push   0x101a1d74
100f4415:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f441b:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f4421:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4424:	68 f4 e9 1b 10       	push   0x101be9f4
100f4429:	68 84 b5 1d 10       	push   0x101db584
100f442e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f4434:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f443a:	83 c4 20             	add    esp,0x20
100f443d:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100f4444:	74 15                	je     0x100f445b
100f4446:	0f 28 05 00 db 1d 10 	movaps xmm0,XMMWORD PTR ds:0x101ddb00
100f444d:	0f 11 87 f4 03 00 00 	movups XMMWORD PTR [edi+0x3f4],xmm0
100f4454:	0f 11 87 04 04 00 00 	movups XMMWORD PTR [edi+0x404],xmm0
100f445b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f4460:	68 28 b7 1c 10       	push   0x101cb728
100f4465:	8b 00                	mov    eax,DWORD PTR [eax]
100f4467:	89 87 d8 04 00 00    	mov    DWORD PTR [edi+0x4d8],eax
100f446d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4470:	c6 87 e8 04 00 00 00 	mov    BYTE PTR [edi+0x4e8],0x0
100f4477:	c7 87 ec 04 00 00 00 	mov    DWORD PTR [edi+0x4ec],0x0
100f447e:	00 00 00 
100f4481:	c7 87 f0 04 00 00 00 	mov    DWORD PTR [edi+0x4f0],0x0
100f4488:	00 00 00 
100f448b:	c7 80 64 02 00 00 00 	mov    DWORD PTR [eax+0x264],0x0
100f4492:	00 00 00 
100f4495:	c6 87 01 05 00 00 00 	mov    BYTE PTR [edi+0x501],0x0
100f449c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f44a1:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f44a5:	f3 0f 11 87 04 05 00 	movss  DWORD PTR [edi+0x504],xmm0
100f44ac:	00 
100f44ad:	f3 0f 11 87 f4 04 00 	movss  DWORD PTR [edi+0x4f4],xmm0
100f44b4:	00 
100f44b5:	c7 87 08 05 00 00 ff 	mov    DWORD PTR [edi+0x508],0xffffffff
100f44bc:	ff ff ff 
100f44bf:	c7 87 f8 04 00 00 ff 	mov    DWORD PTR [edi+0x4f8],0xffffffff
100f44c6:	ff ff ff 
100f44c9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f44ce:	8b 00                	mov    eax,DWORD PTR [eax]
100f44d0:	89 87 dc 21 00 00    	mov    DWORD PTR [edi+0x21dc],eax
100f44d6:	c7 05 18 67 22 10 00 	mov    DWORD PTR ds:0x10226718,0x0
100f44dd:	00 00 00 
100f44e0:	c6 05 74 64 22 10 00 	mov    BYTE PTR ds:0x10226474,0x0
100f44e7:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100f44ea:	c7 87 f0 05 00 00 02 	mov    DWORD PTR [edi+0x5f0],0x2
100f44f1:	00 00 00 
100f44f4:	c6 87 f4 05 00 00 00 	mov    BYTE PTR [edi+0x5f4],0x0
100f44fb:	f3 0f 7e 46 08       	movq   xmm0,QWORD PTR [esi+0x8]
100f4500:	66 0f d6 87 18 06 00 	movq   QWORD PTR [edi+0x618],xmm0
100f4507:	00 
100f4508:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100f450b:	89 87 20 06 00 00    	mov    DWORD PTR [edi+0x620],eax
100f4511:	c6 87 2a 1f 00 00 00 	mov    BYTE PTR [edi+0x1f2a],0x0
100f4518:	8b b6 0c 02 00 00    	mov    esi,DWORD PTR [esi+0x20c]
100f451e:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f4524:	50                   	push   eax
100f4525:	68 8c 1c 1a 10       	push   0x101a1c8c
100f452a:	56                   	push   esi
100f452b:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f4531:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4534:	68 40 b7 1c 10       	push   0x101cb740
100f4539:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
100f453f:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f4545:	50                   	push   eax
100f4546:	68 90 1c 1a 10       	push   0x101a1c90
100f454b:	56                   	push   esi
100f454c:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f4552:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4555:	68 54 b7 1c 10       	push   0x101cb754
100f455a:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
100f4560:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f4566:	50                   	push   eax
100f4567:	68 94 1c 1a 10       	push   0x101a1c94
100f456c:	56                   	push   esi
100f456d:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f4573:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4576:	c7 87 20 04 00 00 00 	mov    DWORD PTR [edi+0x420],0x0
100f457d:	00 00 00 
100f4580:	c7 87 8c 1e 00 00 00 	mov    DWORD PTR [edi+0x1e8c],0x0
100f4587:	00 00 00 
100f458a:	c7 87 b8 1e 00 00 ff 	mov    DWORD PTR [edi+0x1eb8],0xffffffff
100f4591:	ff ff ff 
100f4594:	c6 87 f8 1e 00 00 00 	mov    BYTE PTR [edi+0x1ef8],0x0
100f459b:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f45a1:	50                   	push   eax
100f45a2:	50                   	push   eax
100f45a3:	e8 d8 2b 02 00       	call   0x10117180
100f45a8:	6a 01                	push   0x1
100f45aa:	6a 02                	push   0x2
100f45ac:	68 b0 5f 1b 10       	push   0x101b5fb0
100f45b1:	57                   	push   edi
100f45b2:	e8 59 52 02 00       	call   0x10119810
100f45b7:	83 c4 48             	add    esp,0x48
100f45ba:	8d 8f 50 23 00 00    	lea    ecx,[edi+0x2350]
100f45c0:	6a 00                	push   0x0
100f45c2:	e8 79 31 f2 ff       	call   0x10017740
100f45c7:	83 bf 5c 23 00 00 00 	cmp    DWORD PTR [edi+0x235c],0x0
100f45ce:	74 1b                	je     0x100f45eb
100f45d0:	83 bf 60 23 00 00 00 	cmp    DWORD PTR [edi+0x2360],0x0
100f45d7:	74 12                	je     0x100f45eb
100f45d9:	83 bf 64 23 00 00 00 	cmp    DWORD PTR [edi+0x2364],0x0
100f45e0:	74 09                	je     0x100f45eb
100f45e2:	83 bf 68 23 00 00 00 	cmp    DWORD PTR [edi+0x2368],0x0
100f45e9:	75 43                	jne    0x100f462e
100f45eb:	6a 09                	push   0x9
100f45ed:	6a 01                	push   0x1
100f45ef:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f45f5:	6a 09                	push   0x9
100f45f7:	6a 01                	push   0x1
100f45f9:	89 87 5c 23 00 00    	mov    DWORD PTR [edi+0x235c],eax
100f45ff:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f4605:	6a 09                	push   0x9
100f4607:	6a 01                	push   0x1
100f4609:	89 87 60 23 00 00    	mov    DWORD PTR [edi+0x2360],eax
100f460f:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f4615:	6a 09                	push   0x9
100f4617:	6a 01                	push   0x1
100f4619:	89 87 64 23 00 00    	mov    DWORD PTR [edi+0x2364],eax
100f461f:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f4625:	83 c4 20             	add    esp,0x20
100f4628:	89 87 68 23 00 00    	mov    DWORD PTR [edi+0x2368],eax
100f462e:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100f4635:	10 
100f4636:	8b cf                	mov    ecx,edi
100f4638:	66 0f d6 87 d4 1e 00 	movq   QWORD PTR [edi+0x1ed4],xmm0
100f463f:	00 
100f4640:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100f4645:	89 87 dc 1e 00 00    	mov    DWORD PTR [edi+0x1edc],eax
100f464b:	c6 87 c8 1e 00 00 00 	mov    BYTE PTR [edi+0x1ec8],0x0
100f4652:	c6 87 6c 22 00 00 00 	mov    BYTE PTR [edi+0x226c],0x0
100f4659:	c7 87 74 22 00 00 00 	mov    DWORD PTR [edi+0x2274],0x0
100f4660:	00 00 00 
100f4663:	c7 87 7c 22 00 00 00 	mov    DWORD PTR [edi+0x227c],0x0
100f466a:	00 00 00 
100f466d:	c7 87 cc 1e 00 00 00 	mov    DWORD PTR [edi+0x1ecc],0x0
100f4674:	00 00 00 
100f4677:	c7 87 a0 1e 00 00 00 	mov    DWORD PTR [edi+0x1ea0],0x0
100f467e:	00 00 00 
100f4681:	e8 ba e6 ff ff       	call   0x100f2d40
100f4686:	8b cf                	mov    ecx,edi
100f4688:	e8 73 e6 ff ff       	call   0x100f2d00
100f468d:	c7 87 d4 21 00 00 00 	mov    DWORD PTR [edi+0x21d4],0x0
100f4694:	00 00 00 
100f4697:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f469c:	f3 0f 2c 00          	cvttss2si eax,DWORD PTR [eax]
100f46a0:	89 87 d0 21 00 00    	mov    DWORD PTR [edi+0x21d0],eax
100f46a6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f46ab:	8b 00                	mov    eax,DWORD PTR [eax]
100f46ad:	89 87 48 20 00 00    	mov    DWORD PTR [edi+0x2048],eax
100f46b3:	c7 87 38 20 00 00 00 	mov    DWORD PTR [edi+0x2038],0x0
100f46ba:	00 00 00 
100f46bd:	c7 87 f0 21 00 00 00 	mov    DWORD PTR [edi+0x21f0],0x42c80000
100f46c4:	00 c8 42 
100f46c7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f46cc:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f46d0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f46d3:	f3 0f 11 87 f8 21 00 	movss  DWORD PTR [edi+0x21f8],xmm0
100f46da:	00 
100f46db:	f3 0f 11 87 f4 21 00 	movss  DWORD PTR [edi+0x21f4],xmm0
100f46e2:	00 
100f46e3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f46e9:	6a 00                	push   0x0
100f46eb:	ff 35 7c 65 22 10    	push   DWORD PTR ds:0x1022657c
100f46f1:	6a 08                	push   0x8
100f46f3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f46f9:	f3 0f 2c 87 f0 21 00 	cvttss2si eax,DWORD PTR [edi+0x21f0]
100f4700:	00 
100f4701:	50                   	push   eax
100f4702:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f4708:	83 c4 10             	add    esp,0x10
100f470b:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f4712:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f4718:	83 c4 04             	add    esp,0x4
100f471b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f4721:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4724:	c7 87 08 25 00 00 00 	mov    DWORD PTR [edi+0x2508],0x0
100f472b:	00 00 00 
100f472e:	c7 80 18 02 00 00 00 	mov    DWORD PTR [eax+0x218],0x0
100f4735:	00 00 00 
100f4738:	c7 87 0c 25 00 00 ff 	mov    DWORD PTR [edi+0x250c],0xffffffff
100f473f:	ff ff ff 
100f4742:	c7 87 64 26 00 00 00 	mov    DWORD PTR [edi+0x2664],0x0
100f4749:	00 00 00 
100f474c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f4751:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f4755:	0f 5a c0             	cvtps2pd xmm0,xmm0
100f4758:	c7 87 6c 23 00 00 00 	mov    DWORD PTR [edi+0x236c],0x0
100f475f:	00 00 00 
100f4762:	c7 87 ac 24 00 00 00 	mov    DWORD PTR [edi+0x24ac],0x0
100f4769:	00 00 00 
100f476c:	c7 87 08 02 00 00 00 	mov    DWORD PTR [edi+0x208],0x3f000000
100f4773:	00 00 3f 
100f4776:	c7 87 1c 03 00 00 f7 	mov    DWORD PTR [edi+0x31c],0xf7
100f477d:	00 00 00 
100f4780:	f2 0f 58 05 98 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e98
100f4787:	10 
100f4788:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100f478c:	f3 0f 11 87 a4 24 00 	movss  DWORD PTR [edi+0x24a4],xmm0
100f4793:	00 
100f4794:	e8 87 63 02 00       	call   0x1011ab20
100f4799:	8b 07                	mov    eax,DWORD PTR [edi]
100f479b:	8b cf                	mov    ecx,edi
100f479d:	d9 9f 08 03 00 00    	fstp   DWORD PTR [edi+0x308]
100f47a3:	ff 90 ac 00 00 00    	call   DWORD PTR [eax+0xac]
100f47a9:	c7 87 a8 22 00 00 63 	mov    DWORD PTR [edi+0x22a8],0x63
100f47b0:	00 00 00 
100f47b3:	c7 87 a4 22 00 00 00 	mov    DWORD PTR [edi+0x22a4],0x3f800000
100f47ba:	00 80 3f 
100f47bd:	c7 87 c4 22 00 00 00 	mov    DWORD PTR [edi+0x22c4],0x0
100f47c4:	00 00 00 
100f47c7:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f47cd:	57                   	push   edi
100f47ce:	8b 01                	mov    eax,DWORD PTR [ecx]
100f47d0:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
100f47d6:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f47dc:	57                   	push   edi
100f47dd:	8b 01                	mov    eax,DWORD PTR [ecx]
100f47df:	8b 40 60             	mov    eax,DWORD PTR [eax+0x60]
100f47e2:	ff d0                	call   eax
100f47e4:	f6 80 24 02 00 00 01 	test   BYTE PTR [eax+0x224],0x1
100f47eb:	74 0d                	je     0x100f47fa
100f47ed:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f47f0:	81 88 6c 01 00 00 00 	or     DWORD PTR [eax+0x16c],0x80000000
100f47f7:	00 00 80 
100f47fa:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f47fd:	68 64 84 1a 10       	push   0x101a8464
100f4802:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f4808:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100f480e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4811:	83 c4 08             	add    esp,0x8
100f4814:	8b cf                	mov    ecx,edi
100f4816:	8b 80 b4 00 00 00    	mov    eax,DWORD PTR [eax+0xb4]
100f481c:	6a 01                	push   0x1
100f481e:	a3 f8 2e 22 10       	mov    ds:0x10222ef8,eax
100f4823:	e8 28 a1 f1 ff       	call   0x1000e950
100f4828:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f482b:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100f4831:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f4834:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f483b:	40 00 00 
100f483e:	74 4b                	je     0x100f488b
100f4840:	8d 8d d8 fe ff ff    	lea    ecx,[ebp-0x128]
100f4846:	c7 85 d8 fe ff ff 00 	mov    DWORD PTR [ebp-0x128],0x41800000
100f484d:	00 80 41 
100f4850:	51                   	push   ecx
100f4851:	c7 85 dc fe ff ff 00 	mov    DWORD PTR [ebp-0x124],0x41800000
100f4858:	00 80 41 
100f485b:	8d 8d e4 fe ff ff    	lea    ecx,[ebp-0x11c]
100f4861:	c7 85 e0 fe ff ff 00 	mov    DWORD PTR [ebp-0x120],0x41900000
100f4868:	00 90 41 
100f486b:	c7 85 e4 fe ff ff 00 	mov    DWORD PTR [ebp-0x11c],0xc1800000
100f4872:	00 80 c1 
100f4875:	c7 85 e8 fe ff ff 00 	mov    DWORD PTR [ebp-0x118],0xc1800000
100f487c:	00 80 c1 
100f487f:	c7 85 ec fe ff ff 00 	mov    DWORD PTR [ebp-0x114],0xc1900000
100f4886:	00 90 c1 
100f4889:	eb 49                	jmp    0x100f48d4
100f488b:	8d 8d e4 fe ff ff    	lea    ecx,[ebp-0x11c]
100f4891:	c7 85 e4 fe ff ff 00 	mov    DWORD PTR [ebp-0x11c],0x41800000
100f4898:	00 80 41 
100f489b:	51                   	push   ecx
100f489c:	c7 85 e8 fe ff ff 00 	mov    DWORD PTR [ebp-0x118],0x41800000
100f48a3:	00 80 41 
100f48a6:	8d 8d d8 fe ff ff    	lea    ecx,[ebp-0x128]
100f48ac:	c7 85 ec fe ff ff 00 	mov    DWORD PTR [ebp-0x114],0x42100000
100f48b3:	00 10 42 
100f48b6:	c7 85 d8 fe ff ff 00 	mov    DWORD PTR [ebp-0x128],0xc1800000
100f48bd:	00 80 c1 
100f48c0:	c7 85 dc fe ff ff 00 	mov    DWORD PTR [ebp-0x124],0xc1800000
100f48c7:	00 80 c1 
100f48ca:	c7 85 e0 fe ff ff 00 	mov    DWORD PTR [ebp-0x120],0xc2100000
100f48d1:	00 10 c2 
100f48d4:	51                   	push   ecx
100f48d5:	50                   	push   eax
100f48d6:	e8 55 57 02 00       	call   0x1011a030
100f48db:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f48de:	83 c4 0c             	add    esp,0xc
100f48e1:	0f 28 8d c0 fe ff ff 	movaps xmm1,XMMWORD PTR [ebp-0x140]
100f48e8:	0f 28 c1             	movaps xmm0,xmm1
100f48eb:	c7 85 ec fe ff ff 00 	mov    DWORD PTR [ebp-0x114],0x41e00000
100f48f2:	00 e0 41 
100f48f5:	8b 85 ec fe ff ff    	mov    eax,DWORD PTR [ebp-0x114]
100f48fb:	0f 14 c1             	unpcklps xmm0,xmm1
100f48fe:	66 0f d6 81 78 01 00 	movq   QWORD PTR [ecx+0x178],xmm0
100f4905:	00 
100f4906:	89 81 80 01 00 00    	mov    DWORD PTR [ecx+0x180],eax
100f490c:	8b cf                	mov    ecx,edi
100f490e:	8b 07                	mov    eax,DWORD PTR [edi]
100f4910:	ff 50 30             	call   DWORD PTR [eax+0x30]
100f4913:	83 bf 8c 22 00 00 ff 	cmp    DWORD PTR [edi+0x228c],0xffffffff
100f491a:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
100f4921:	10 
100f4922:	0f 28 8d c0 fe ff ff 	movaps xmm1,XMMWORD PTR [ebp-0x140]
100f4929:	0f 14 c8             	unpcklps xmm1,xmm0
100f492c:	c7 85 ec fe ff ff 00 	mov    DWORD PTR [ebp-0x114],0x0
100f4933:	00 00 00 
100f4936:	8b 85 ec fe ff ff    	mov    eax,DWORD PTR [ebp-0x114]
100f493c:	66 0f d6 8f 38 03 00 	movq   QWORD PTR [edi+0x338],xmm1
100f4943:	00 
100f4944:	89 87 40 03 00 00    	mov    DWORD PTR [edi+0x340],eax
100f494a:	75 10                	jne    0x100f495c
100f494c:	68 88 b5 1d 10       	push   0x101db588
100f4951:	6a 01                	push   0x1
100f4953:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f4959:	83 c4 08             	add    esp,0x8
100f495c:	c7 87 e8 24 00 00 00 	mov    DWORD PTR [edi+0x24e8],0x0
100f4963:	00 00 00 
100f4966:	8d 87 c0 25 00 00    	lea    eax,[edi+0x25c0]
100f496c:	c7 87 34 25 00 00 00 	mov    DWORD PTR [edi+0x2534],0x0
100f4973:	00 00 00 
100f4976:	b9 20 00 00 00       	mov    ecx,0x20
100f497b:	c7 87 cc 24 00 00 01 	mov    DWORD PTR [edi+0x24cc],0x1
100f4982:	00 00 00 
100f4985:	c7 87 04 25 00 00 ff 	mov    DWORD PTR [edi+0x2504],0xffffffff
100f498c:	ff ff ff 
100f498f:	c7 87 d8 24 00 00 00 	mov    DWORD PTR [edi+0x24d8],0x0
100f4996:	00 00 00 
100f4999:	c7 87 30 25 00 00 00 	mov    DWORD PTR [edi+0x2530],0x0
100f49a0:	00 00 00 
100f49a3:	c7 87 fc 24 00 00 ff 	mov    DWORD PTR [edi+0x24fc],0xffffffff
100f49aa:	ff ff ff 
100f49ad:	0f 1f 00             	nop    DWORD PTR [eax]
100f49b0:	c7 40 80 00 00 00 00 	mov    DWORD PTR [eax-0x80],0x0
100f49b7:	8d 40 04             	lea    eax,[eax+0x4]
100f49ba:	c7 40 fc 00 00 00 00 	mov    DWORD PTR [eax-0x4],0x0
100f49c1:	83 e9 01             	sub    ecx,0x1
100f49c4:	75 ea                	jne    0x100f49b0
100f49c6:	89 8f 5c 26 00 00    	mov    DWORD PTR [edi+0x265c],ecx
100f49cc:	89 8f 58 26 00 00    	mov    DWORD PTR [edi+0x2658],ecx
100f49d2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f49d7:	57                   	push   edi
100f49d8:	8b 00                	mov    eax,DWORD PTR [eax]
100f49da:	89 87 d8 27 00 00    	mov    DWORD PTR [edi+0x27d8],eax
100f49e0:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f49e6:	8b 01                	mov    eax,DWORD PTR [ecx]
100f49e8:	ff 50 50             	call   DWORD PTR [eax+0x50]
100f49eb:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f49ee:	5f                   	pop    edi
100f49ef:	33 cd                	xor    ecx,ebp
100f49f1:	5e                   	pop    esi
100f49f2:	e8 bc 91 04 00       	call   0x1013dbb3
100f49f7:	8b e5                	mov    esp,ebp
100f49f9:	5d                   	pop    ebp
100f49fa:	8b e3                	mov    esp,ebx
100f49fc:	5b                   	pop    ebx
100f49fd:	c3                   	ret
