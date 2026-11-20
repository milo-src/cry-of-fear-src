
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008e240 <.text+0x8d240>:
1008e240:	55                   	push   ebp
1008e241:	8b ec                	mov    ebp,esp
1008e243:	83 ec 0c             	sub    esp,0xc
1008e246:	56                   	push   esi
1008e247:	8b f1                	mov    esi,ecx
1008e249:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
1008e24c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008e24f:	85 d2                	test   edx,edx
1008e251:	74 36                	je     0x1008e289
1008e253:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1008e256:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
1008e25b:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
1008e260:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
1008e265:	f3 0f 5c 50 08       	subss  xmm2,DWORD PTR [eax+0x8]
1008e26a:	f3 0f 5c 48 0c       	subss  xmm1,DWORD PTR [eax+0xc]
1008e26f:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1008e274:	0f 14 d1             	unpcklps xmm2,xmm1
1008e277:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008e27c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008e27f:	66 0f d6 96 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm2
1008e286:	00 
1008e287:	eb 10                	jmp    0x1008e299
1008e289:	f3 0f 7e 41 08       	movq   xmm0,QWORD PTR [ecx+0x8]
1008e28e:	66 0f d6 86 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm0
1008e295:	00 
1008e296:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
1008e299:	f3 0f 10 15 80 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1380
1008e2a0:	10 
1008e2a1:	89 86 24 01 00 00    	mov    DWORD PTR [esi+0x124],eax
1008e2a7:	f3 0f 10 81 f4 00 00 	movss  xmm0,DWORD PTR [ecx+0xf4]
1008e2ae:	00 
1008e2af:	f3 0f 10 71 44       	movss  xmm6,DWORD PTR [ecx+0x44]
1008e2b4:	f3 0f 5c c2          	subss  xmm0,xmm2
1008e2b8:	f3 0f 10 69 48       	movss  xmm5,DWORD PTR [ecx+0x48]
1008e2bd:	f2 0f 10 0d 90 1f 1a 	movsd  xmm1,QWORD PTR ds:0x101a1f90
1008e2c4:	10 
1008e2c5:	f3 0f 10 61 4c       	movss  xmm4,DWORD PTR [ecx+0x4c]
1008e2ca:	f3 0f 59 c6          	mulss  xmm0,xmm6
1008e2ce:	0f 5a d8             	cvtps2pd xmm3,xmm0
1008e2d1:	f3 0f 10 81 f8 00 00 	movss  xmm0,DWORD PTR [ecx+0xf8]
1008e2d8:	00 
1008e2d9:	f3 0f 5c c2          	subss  xmm0,xmm2
1008e2dd:	0f 54 d9             	andps  xmm3,xmm1
1008e2e0:	f3 0f 59 c5          	mulss  xmm0,xmm5
1008e2e4:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008e2e7:	0f 54 c1             	andps  xmm0,xmm1
1008e2ea:	f2 0f 58 d8          	addsd  xmm3,xmm0
1008e2ee:	f3 0f 10 81 fc 00 00 	movss  xmm0,DWORD PTR [ecx+0xfc]
1008e2f5:	00 
1008e2f6:	f3 0f 5c c2          	subss  xmm0,xmm2
1008e2fa:	f3 0f 59 c4          	mulss  xmm0,xmm4
1008e2fe:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008e301:	0f 54 c1             	andps  xmm0,xmm1
1008e304:	f2 0f 58 d8          	addsd  xmm3,xmm0
1008e308:	f3 0f 10 86 10 01 00 	movss  xmm0,DWORD PTR [esi+0x110]
1008e30f:	00 
1008e310:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008e313:	f2 0f 5c d8          	subsd  xmm3,xmm0
1008e317:	66 0f 5a c3          	cvtpd2ps xmm0,xmm3
1008e31b:	f3 0f 59 f0          	mulss  xmm6,xmm0
1008e31f:	f3 0f 59 e8          	mulss  xmm5,xmm0
1008e323:	f3 0f 58 b6 1c 01 00 	addss  xmm6,DWORD PTR [esi+0x11c]
1008e32a:	00 
1008e32b:	f3 0f 59 e0          	mulss  xmm4,xmm0
1008e32f:	f3 0f 58 ae 20 01 00 	addss  xmm5,DWORD PTR [esi+0x120]
1008e336:	00 
1008e337:	f3 0f 58 a6 24 01 00 	addss  xmm4,DWORD PTR [esi+0x124]
1008e33e:	00 
1008e33f:	0f 14 f5             	unpcklps xmm6,xmm5
1008e342:	66 0f d6 b6 28 01 00 	movq   QWORD PTR [esi+0x128],xmm6
1008e349:	00 
1008e34a:	f3 0f 11 65 fc       	movss  DWORD PTR [ebp-0x4],xmm4
1008e34f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008e352:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1008e358:	f6 81 a4 01 00 00 01 	test   BYTE PTR [ecx+0x1a4],0x1
1008e35f:	0f 84 4f 01 00 00    	je     0x1008e4b4
1008e365:	f3 0f 10 9e 28 01 00 	movss  xmm3,DWORD PTR [esi+0x128]
1008e36c:	00 
1008e36d:	83 ec 0c             	sub    esp,0xc
1008e370:	0f 28 d3             	movaps xmm2,xmm3
1008e373:	85 d2                	test   edx,edx
1008e375:	0f 84 8b 00 00 00    	je     0x1008e406
1008e37b:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1008e37e:	f3 0f 58 50 08       	addss  xmm2,DWORD PTR [eax+0x8]
1008e383:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
1008e388:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1008e38d:	f3 0f 58 8e 2c 01 00 	addss  xmm1,DWORD PTR [esi+0x12c]
1008e394:	00 
1008e395:	f3 0f 58 86 30 01 00 	addss  xmm0,DWORD PTR [esi+0x130]
1008e39c:	00 
1008e39d:	f3 0f 58 56 68       	addss  xmm2,DWORD PTR [esi+0x68]
1008e3a2:	f3 0f 58 4e 6c       	addss  xmm1,DWORD PTR [esi+0x6c]
1008e3a7:	f3 0f 58 46 70       	addss  xmm0,DWORD PTR [esi+0x70]
1008e3ac:	f3 0f 5c 51 08       	subss  xmm2,DWORD PTR [ecx+0x8]
1008e3b1:	f3 0f 5c 49 0c       	subss  xmm1,DWORD PTR [ecx+0xc]
1008e3b6:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
1008e3bb:	8b cc                	mov    ecx,esp
1008e3bd:	0f 14 d1             	unpcklps xmm2,xmm1
1008e3c0:	66 0f d6 56 68       	movq   QWORD PTR [esi+0x68],xmm2
1008e3c5:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008e3ca:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008e3cd:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
1008e3d0:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1008e3d3:	f3 0f 10 96 2c 01 00 	movss  xmm2,DWORD PTR [esi+0x12c]
1008e3da:	00 
1008e3db:	f3 0f 10 8e 30 01 00 	movss  xmm1,DWORD PTR [esi+0x130]
1008e3e2:	00 
1008e3e3:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1008e3e8:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
1008e3ed:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
1008e3f2:	f3 0f 58 c3          	addss  xmm0,xmm3
1008e3f6:	f3 0f 11 51 04       	movss  DWORD PTR [ecx+0x4],xmm2
1008e3fb:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
1008e400:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
1008e404:	eb 59                	jmp    0x1008e45f
1008e406:	f3 0f 10 8e 2c 01 00 	movss  xmm1,DWORD PTR [esi+0x12c]
1008e40d:	00 
1008e40e:	f3 0f 58 56 68       	addss  xmm2,DWORD PTR [esi+0x68]
1008e413:	f3 0f 10 86 30 01 00 	movss  xmm0,DWORD PTR [esi+0x130]
1008e41a:	00 
1008e41b:	f3 0f 58 4e 6c       	addss  xmm1,DWORD PTR [esi+0x6c]
1008e420:	f3 0f 58 46 70       	addss  xmm0,DWORD PTR [esi+0x70]
1008e425:	f3 0f 5c 51 08       	subss  xmm2,DWORD PTR [ecx+0x8]
1008e42a:	f3 0f 5c 49 0c       	subss  xmm1,DWORD PTR [ecx+0xc]
1008e42f:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
1008e434:	8b cc                	mov    ecx,esp
1008e436:	0f 14 d1             	unpcklps xmm2,xmm1
1008e439:	66 0f d6 56 68       	movq   QWORD PTR [esi+0x68],xmm2
1008e43e:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008e443:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008e446:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
1008e449:	f3 0f 11 19          	movss  DWORD PTR [ecx],xmm3
1008e44d:	8b 86 2c 01 00 00    	mov    eax,DWORD PTR [esi+0x12c]
1008e453:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008e456:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
1008e45c:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008e45f:	56                   	push   esi
1008e460:	e8 eb 60 03 00       	call   0x100c4550
1008e465:	f3 0f 10 8e 28 01 00 	movss  xmm1,DWORD PTR [esi+0x128]
1008e46c:	00 
1008e46d:	83 c4 10             	add    esp,0x10
1008e470:	f3 0f 10 96 2c 01 00 	movss  xmm2,DWORD PTR [esi+0x12c]
1008e477:	00 
1008e478:	f3 0f 10 9e 30 01 00 	movss  xmm3,DWORD PTR [esi+0x130]
1008e47f:	00 
1008e480:	f3 0f 7e 86 1c 01 00 	movq   xmm0,QWORD PTR [esi+0x11c]
1008e487:	00 
1008e488:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
1008e48e:	66 0f d6 86 28 01 00 	movq   QWORD PTR [esi+0x128],xmm0
1008e495:	00 
1008e496:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1008e49c:	f3 0f 11 8e 1c 01 00 	movss  DWORD PTR [esi+0x11c],xmm1
1008e4a3:	00 
1008e4a4:	f3 0f 11 96 20 01 00 	movss  DWORD PTR [esi+0x120],xmm2
1008e4ab:	00 
1008e4ac:	f3 0f 11 9e 24 01 00 	movss  DWORD PTR [esi+0x124],xmm3
1008e4b3:	00 
1008e4b4:	5e                   	pop    esi
1008e4b5:	8b e5                	mov    esp,ebp
1008e4b7:	5d                   	pop    ebp
1008e4b8:	c3                   	ret
