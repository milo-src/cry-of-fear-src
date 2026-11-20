
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd100 <.text+0xbc100>:
100bd100:	55                   	push   ebp
100bd101:	8b ec                	mov    ebp,esp
100bd103:	83 e4 f8             	and    esp,0xfffffff8
100bd106:	83 ec 6c             	sub    esp,0x6c
100bd109:	53                   	push   ebx
100bd10a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100bd10d:	56                   	push   esi
100bd10e:	57                   	push   edi
100bd10f:	8b f9                	mov    edi,ecx
100bd111:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100bd118:	00 
100bd119:	53                   	push   ebx
100bd11a:	8b 07                	mov    eax,DWORD PTR [edi]
100bd11c:	81 a7 80 01 00 00 ff 	and    DWORD PTR [edi+0x180],0xfff7bfff
100bd123:	bf f7 ff 
100bd126:	ff 90 14 01 00 00    	call   DWORD PTR [eax+0x114]
100bd12c:	8b 97 80 01 00 00    	mov    edx,DWORD PTR [edi+0x180]
100bd132:	8b c8                	mov    ecx,eax
100bd134:	8b c2                	mov    eax,edx
100bd136:	83 e2 df             	and    edx,0xffffffdf
100bd139:	83 c8 20             	or     eax,0x20
100bd13c:	85 c9                	test   ecx,ecx
100bd13e:	8b cb                	mov    ecx,ebx
100bd140:	0f 44 d0             	cmove  edx,eax
100bd143:	89 97 80 01 00 00    	mov    DWORD PTR [edi+0x180],edx
100bd149:	8b 03                	mov    eax,DWORD PTR [ebx]
100bd14b:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100bd151:	85 c0                	test   eax,eax
100bd153:	75 1f                	jne    0x100bd174
100bd155:	8b 87 80 01 00 00    	mov    eax,DWORD PTR [edi+0x180]
100bd15b:	0d 00 00 10 00       	or     eax,0x100000
100bd160:	83 e0 cf             	and    eax,0xffffffcf
100bd163:	89 87 80 01 00 00    	mov    DWORD PTR [edi+0x180],eax
100bd169:	33 c0                	xor    eax,eax
100bd16b:	5f                   	pop    edi
100bd16c:	5e                   	pop    esi
100bd16d:	5b                   	pop    ebx
100bd16e:	8b e5                	mov    esp,ebp
100bd170:	5d                   	pop    ebp
100bd171:	c2 04 00             	ret    0x4
100bd174:	f7 87 04 03 00 00 00 	test   DWORD PTR [edi+0x304],0x10000
100bd17b:	00 01 00 
100bd17e:	0f 84 93 00 00 00    	je     0x100bd217
100bd184:	8b 03                	mov    eax,DWORD PTR [ebx]
100bd186:	8b cb                	mov    ecx,ebx
100bd188:	ff 50 78             	call   DWORD PTR [eax+0x78]
100bd18b:	8b c8                	mov    ecx,eax
100bd18d:	85 c9                	test   ecx,ecx
100bd18f:	0f 84 82 00 00 00    	je     0x100bd217
100bd195:	8b 01                	mov    eax,DWORD PTR [ecx]
100bd197:	8d 54 24 34          	lea    edx,[esp+0x34]
100bd19b:	52                   	push   edx
100bd19c:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
100bd1a2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bd1a5:	8d 4c 24 40          	lea    ecx,[esp+0x40]
100bd1a9:	0f 57 db             	xorps  xmm3,xmm3
100bd1ac:	51                   	push   ecx
100bd1ad:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100bd1b2:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
100bd1b7:	f3 0f 58 d3          	addss  xmm2,xmm3
100bd1bb:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100bd1c0:	f3 0f 58 0d 30 16 1b 	addss  xmm1,DWORD PTR ds:0x101b1630
100bd1c7:	10 
100bd1c8:	f3 0f 58 c3          	addss  xmm0,xmm3
100bd1cc:	f3 0f 11 54 24 30    	movss  DWORD PTR [esp+0x30],xmm2
100bd1d2:	f3 0f 11 4c 24 34    	movss  DWORD PTR [esp+0x34],xmm1
100bd1d8:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100bd1de:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bd1e4:	8d 44 24 30          	lea    eax,[esp+0x30]
100bd1e8:	6a 01                	push   0x1
100bd1ea:	6a 01                	push   0x1
100bd1ec:	50                   	push   eax
100bd1ed:	8d 44 24 48          	lea    eax,[esp+0x48]
100bd1f1:	50                   	push   eax
100bd1f2:	e8 29 d6 05 00       	call   0x1011a820
100bd1f7:	f3 0f 10 44 24 68    	movss  xmm0,DWORD PTR [esp+0x68]
100bd1fd:	83 c4 18             	add    esp,0x18
100bd200:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100bd207:	9f                   	lahf
100bd208:	f6 c4 44             	test   ah,0x44
100bd20b:	7a 0a                	jp     0x100bd217
100bd20d:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x4000
100bd214:	40 00 00 
100bd217:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd21a:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100bd21d:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
100bd222:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100bd227:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
100bd22c:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
100bd231:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100bd236:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
100bd23b:	f3 0f 59 c9          	mulss  xmm1,xmm1
100bd23f:	f3 0f 59 d2          	mulss  xmm2,xmm2
100bd243:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bd247:	f3 0f 58 d1          	addss  xmm2,xmm1
100bd24b:	0f 57 c9             	xorps  xmm1,xmm1
100bd24e:	f3 0f 58 c2          	addss  xmm0,xmm2
100bd252:	f3 0f 11 54 24 1c    	movss  DWORD PTR [esp+0x1c],xmm2
100bd258:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd25b:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bd25f:	77 06                	ja     0x100bd267
100bd261:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bd265:	eb 05                	jmp    0x100bd26c
100bd267:	e8 24 ec 0a 00       	call   0x1016be90
100bd26c:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd26f:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100bd273:	f3 0f 10 88 fc 00 00 	movss  xmm1,DWORD PTR [eax+0xfc]
100bd27a:	00 
100bd27b:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
100bd281:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100bd286:	0f 5a c9             	cvtps2pd xmm1,xmm1
100bd289:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd28c:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
100bd293:	10 
100bd294:	f2 0f 58 c8          	addsd  xmm1,xmm0
100bd298:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100bd29c:	0f 57 c9             	xorps  xmm1,xmm1
100bd29f:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100bd2a5:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
100bd2aa:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bd2ae:	f3 0f 58 44 24 1c    	addss  xmm0,DWORD PTR [esp+0x1c]
100bd2b4:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd2b7:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bd2bb:	77 06                	ja     0x100bd2c3
100bd2bd:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bd2c1:	eb 05                	jmp    0x100bd2c8
100bd2c3:	e8 c8 eb 0a 00       	call   0x1016be90
100bd2c8:	0f 57 c9             	xorps  xmm1,xmm1
100bd2cb:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100bd2cf:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100bd2d5:	0f 2f c1             	comiss xmm0,xmm1
100bd2d8:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100bd2de:	77 4a                	ja     0x100bd32a
100bd2e0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd2e3:	0f 57 c9             	xorps  xmm1,xmm1
100bd2e6:	f3 0f 10 44 24 24    	movss  xmm0,DWORD PTR [esp+0x24]
100bd2ec:	f3 0f 5c 80 fc 00 00 	subss  xmm0,DWORD PTR [eax+0xfc]
100bd2f3:	00 
100bd2f4:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
100bd2f9:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bd2fd:	f3 0f 58 44 24 1c    	addss  xmm0,DWORD PTR [esp+0x1c]
100bd303:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd306:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bd30a:	77 06                	ja     0x100bd312
100bd30c:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bd310:	eb 05                	jmp    0x100bd317
100bd312:	e8 79 eb 0a 00       	call   0x1016be90
100bd317:	0f 57 c9             	xorps  xmm1,xmm1
100bd31a:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100bd31e:	f3 0f 5d 4c 24 20    	minss  xmm1,DWORD PTR [esp+0x20]
100bd324:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100bd32a:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
100bd330:	f6 c1 10             	test   cl,0x10
100bd333:	0f 84 13 01 00 00    	je     0x100bd44c
100bd339:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd33c:	8b cb                	mov    ecx,ebx
100bd33e:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
100bd345:	00 
100bd346:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bd34b:	66 0f d6 87 f4 02 00 	movq   QWORD PTR [edi+0x2f4],xmm0
100bd352:	00 
100bd353:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bd356:	89 87 fc 02 00 00    	mov    DWORD PTR [edi+0x2fc],eax
100bd35c:	8b 03                	mov    eax,DWORD PTR [ebx]
100bd35e:	ff 50 78             	call   DWORD PTR [eax+0x78]
100bd361:	8b c8                	mov    ecx,eax
100bd363:	85 c9                	test   ecx,ecx
100bd365:	74 27                	je     0x100bd38e
100bd367:	8b 01                	mov    eax,DWORD PTR [ecx]
100bd369:	57                   	push   edi
100bd36a:	ff 90 54 01 00 00    	call   DWORD PTR [eax+0x154]
100bd370:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
100bd376:	85 c0                	test   eax,eax
100bd378:	74 08                	je     0x100bd382
100bd37a:	81 c9 00 00 08 00    	or     ecx,0x80000
100bd380:	eb 06                	jmp    0x100bd388
100bd382:	81 e1 ff ff f7 ff    	and    ecx,0xfff7ffff
100bd388:	89 8f 80 01 00 00    	mov    DWORD PTR [edi+0x180],ecx
100bd38e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100bd391:	0f 57 c9             	xorps  xmm1,xmm1
100bd394:	f3 0f 10 41 20       	movss  xmm0,DWORD PTR [ecx+0x20]
100bd399:	0f 2e c1             	ucomiss xmm0,xmm1
100bd39c:	9f                   	lahf
100bd39d:	f6 c4 44             	test   ah,0x44
100bd3a0:	7a 20                	jp     0x100bd3c2
100bd3a2:	f3 0f 10 41 24       	movss  xmm0,DWORD PTR [ecx+0x24]
100bd3a7:	0f 2e c1             	ucomiss xmm0,xmm1
100bd3aa:	9f                   	lahf
100bd3ab:	f6 c4 44             	test   ah,0x44
100bd3ae:	7a 12                	jp     0x100bd3c2
100bd3b0:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100bd3b5:	0f 2e c1             	ucomiss xmm0,xmm1
100bd3b8:	9f                   	lahf
100bd3b9:	f6 c4 44             	test   ah,0x44
100bd3bc:	0f 8b 82 00 00 00    	jnp    0x100bd444
100bd3c2:	83 ec 08             	sub    esp,0x8
100bd3c5:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100bd3cc:	00 
100bd3cd:	c7 04 24 cd cc 4c bd 	mov    DWORD PTR [esp],0xbd4ccccd
100bd3d4:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100bd3da:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd3dd:	83 c4 08             	add    esp,0x8
100bd3e0:	f3 0f 10 a7 f4 02 00 	movss  xmm4,DWORD PTR [edi+0x2f4]
100bd3e7:	00 
100bd3e8:	f3 0f 10 97 f8 02 00 	movss  xmm2,DWORD PTR [edi+0x2f8]
100bd3ef:	00 
100bd3f0:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
100bd3f4:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
100bd3f9:	f3 0f 10 5c 24 24    	movss  xmm3,DWORD PTR [esp+0x24]
100bd3ff:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
100bd404:	f3 0f 59 c3          	mulss  xmm0,xmm3
100bd408:	f3 0f 59 cb          	mulss  xmm1,xmm3
100bd40c:	f3 0f 5c e0          	subss  xmm4,xmm0
100bd410:	f3 0f 10 40 24       	movss  xmm0,DWORD PTR [eax+0x24]
100bd415:	f3 0f 59 c3          	mulss  xmm0,xmm3
100bd419:	f3 0f 5c d0          	subss  xmm2,xmm0
100bd41d:	f3 0f 10 87 fc 02 00 	movss  xmm0,DWORD PTR [edi+0x2fc]
100bd424:	00 
100bd425:	f3 0f 5c c1          	subss  xmm0,xmm1
100bd429:	0f 14 e2             	unpcklps xmm4,xmm2
100bd42c:	f3 0f 11 44 24 3c    	movss  DWORD PTR [esp+0x3c],xmm0
100bd432:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
100bd436:	66 0f d6 a7 f4 02 00 	movq   QWORD PTR [edi+0x2f4],xmm4
100bd43d:	00 
100bd43e:	89 87 fc 02 00 00    	mov    DWORD PTR [edi+0x2fc],eax
100bd444:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
100bd44a:	eb 33                	jmp    0x100bd47f
100bd44c:	f6 c1 30             	test   cl,0x30
100bd44f:	75 2e                	jne    0x100bd47f
100bd451:	f3 0f 10 05 84 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1384
100bd458:	10 
100bd459:	0f 2f c1             	comiss xmm0,xmm1
100bd45c:	72 21                	jb     0x100bd47f
100bd45e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bd461:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
100bd468:	00 
100bd469:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bd46e:	66 0f d6 87 f4 02 00 	movq   QWORD PTR [edi+0x2f4],xmm0
100bd475:	00 
100bd476:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bd479:	89 87 fc 02 00 00    	mov    DWORD PTR [edi+0x2fc],eax
100bd47f:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
100bd485:	8b c1                	mov    eax,ecx
100bd487:	25 7f ff ff ff       	and    eax,0xffffff7f
100bd48c:	81 c9 80 00 00 00    	or     ecx,0x80
100bd492:	0f 2f 87 28 03 00 00 	comiss xmm0,DWORD PTR [edi+0x328]
100bd499:	0f 42 c8             	cmovb  ecx,eax
100bd49c:	8b 07                	mov    eax,DWORD PTR [edi]
100bd49e:	89 8f 80 01 00 00    	mov    DWORD PTR [edi+0x180],ecx
100bd4a4:	8b cf                	mov    ecx,edi
100bd4a6:	ff 90 d4 01 00 00    	call   DWORD PTR [eax+0x1d4]
100bd4ac:	85 c0                	test   eax,eax
100bd4ae:	74 1f                	je     0x100bd4cf
100bd4b0:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
100bd4b6:	51                   	push   ecx
100bd4b7:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100bd4bd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bd4c2:	e8 c9 a2 f5 ff       	call   0x10017790
100bd4c7:	50                   	push   eax
100bd4c8:	8b cf                	mov    ecx,edi
100bd4ca:	e8 21 fa ff ff       	call   0x100bcef0
100bd4cf:	83 bf b8 02 00 00 02 	cmp    DWORD PTR [edi+0x2b8],0x2
100bd4d6:	0f 85 9b 00 00 00    	jne    0x100bd577
100bd4dc:	8b 9f bc 02 00 00    	mov    ebx,DWORD PTR [edi+0x2bc]
100bd4e2:	83 fb 08             	cmp    ebx,0x8
100bd4e5:	0f 8d 8c 00 00 00    	jge    0x100bd577
100bd4eb:	8d 73 24             	lea    esi,[ebx+0x24]
100bd4ee:	c1 e6 04             	shl    esi,0x4
100bd4f1:	03 f7                	add    esi,edi
100bd4f3:	81 7e 04 82 00 00 00 	cmp    DWORD PTR [esi+0x4],0x82
100bd4fa:	75 5e                	jne    0x100bd55a
100bd4fc:	f3 0f 10 4e f8       	movss  xmm1,DWORD PTR [esi-0x8]
100bd501:	f3 0f 10 56 fc       	movss  xmm2,DWORD PTR [esi-0x4]
100bd506:	f3 0f 5c 97 f8 02 00 	subss  xmm2,DWORD PTR [edi+0x2f8]
100bd50d:	00 
100bd50e:	f3 0f 5c 8f f4 02 00 	subss  xmm1,DWORD PTR [edi+0x2f4]
100bd515:	00 
100bd516:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100bd51a:	f3 0f 5c 87 fc 02 00 	subss  xmm0,DWORD PTR [edi+0x2fc]
100bd521:	00 
100bd522:	f3 0f 59 d2          	mulss  xmm2,xmm2
100bd526:	f3 0f 59 c9          	mulss  xmm1,xmm1
100bd52a:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bd52e:	f3 0f 58 d1          	addss  xmm2,xmm1
100bd532:	0f 57 c9             	xorps  xmm1,xmm1
100bd535:	f3 0f 58 d0          	addss  xmm2,xmm0
100bd539:	0f 5a c2             	cvtps2pd xmm0,xmm2
100bd53c:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bd540:	77 06                	ja     0x100bd548
100bd542:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bd546:	eb 05                	jmp    0x100bd54d
100bd548:	e8 43 e9 0a 00       	call   0x1016be90
100bd54d:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100bd551:	0f 2f 05 14 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f14
100bd558:	77 16                	ja     0x100bd570
100bd55a:	43                   	inc    ebx
100bd55b:	83 c6 10             	add    esi,0x10
100bd55e:	83 fb 08             	cmp    ebx,0x8
100bd561:	7c 90                	jl     0x100bd4f3
100bd563:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100bd567:	5f                   	pop    edi
100bd568:	5e                   	pop    esi
100bd569:	5b                   	pop    ebx
100bd56a:	8b e5                	mov    esp,ebp
100bd56c:	5d                   	pop    ebp
100bd56d:	c2 04 00             	ret    0x4
100bd570:	8b cf                	mov    ecx,edi
100bd572:	e8 39 08 00 00       	call   0x100bddb0
100bd577:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100bd57b:	5f                   	pop    edi
100bd57c:	5e                   	pop    esi
100bd57d:	5b                   	pop    ebx
100bd57e:	8b e5                	mov    esp,ebp
100bd580:	5d                   	pop    ebp
100bd581:	c2 04 00             	ret    0x4
