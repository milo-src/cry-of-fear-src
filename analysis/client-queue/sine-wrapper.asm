100f8320:	83 ec 08             	sub    esp,0x8
100f8323:	0f ae 5c 24 04       	stmxcsr DWORD PTR [esp+0x4]
100f8328:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100f832c:	25 80 7f 00 00       	and    eax,0x7f80
100f8331:	3d 80 1f 00 00       	cmp    eax,0x1f80
100f8336:	75 0f                	jne    0x100f8347
100f8338:	d9 3c 24             	fnstcw WORD PTR [esp]
100f833b:	66 8b 04 24          	mov    ax,WORD PTR [esp]
100f833f:	66 83 e0 7f          	and    ax,0x7f
100f8343:	66 83 f8 7f          	cmp    ax,0x7f
100f8347:	8d 64 24 08          	lea    esp,[esp+0x8]
100f834b:	0f 85 7b 01 00 00    	jne    0x100f84cc
100f8351:	66 0f c5 c0 03       	pextrw eax,xmm0,0x3
100f8356:	66 25 ff 7f          	and    ax,0x7fff
100f835a:	66 2d 30 30          	sub    ax,0x3030
100f835e:	66 3d c5 10          	cmp    ax,0x10c5
100f8362:	0f 87 36 01 00 00    	ja     0x100f849e
100f8368:	66 0f 12 0d 80 11 16 	movlpd xmm1,QWORD PTR ds:0x10161180
100f836f:	10 
100f8370:	f2 0f 59 c8          	mulsd  xmm1,xmm0
100f8374:	66 0f 12 15 88 11 16 	movlpd xmm2,QWORD PTR ds:0x10161188
100f837b:	10 
100f837c:	f2 0f 2d d1          	cvtsd2si edx,xmm1
100f8380:	f2 0f 58 ca          	addsd  xmm1,xmm2
100f8384:	66 0f 12 1d a0 11 16 	movlpd xmm3,QWORD PTR ds:0x101611a0
100f838b:	10 
100f838c:	f2 0f 5c ca          	subsd  xmm1,xmm2
100f8390:	66 0f 28 15 90 11 16 	movapd xmm2,XMMWORD PTR ds:0x10161190
100f8397:	10 
100f8398:	f2 0f 59 d9          	mulsd  xmm3,xmm1
100f839c:	66 0f 14 c9          	unpcklpd xmm1,xmm1
100f83a0:	81 c2 00 76 1c 00    	add    edx,0x1c7600
100f83a6:	f2 0f 10 e0          	movsd  xmm4,xmm0
100f83aa:	83 e2 3f             	and    edx,0x3f
100f83ad:	66 0f 28 2d 70 11 16 	movapd xmm5,XMMWORD PTR ds:0x10161170
100f83b4:	10 
100f83b5:	8d 05 00 41 16 10    	lea    eax,ds:0x10164100
100f83bb:	c1 e2 05             	shl    edx,0x5
100f83be:	03 c2                	add    eax,edx
100f83c0:	66 0f 59 d1          	mulpd  xmm2,xmm1
100f83c4:	f2 0f 5c c3          	subsd  xmm0,xmm3
100f83c8:	f2 0f 59 0d a8 11 16 	mulsd  xmm1,QWORD PTR ds:0x101611a8
100f83cf:	10 
100f83d0:	f2 0f 5c e3          	subsd  xmm4,xmm3
100f83d4:	66 0f 12 78 08       	movlpd xmm7,QWORD PTR [eax+0x8]
100f83d9:	66 0f 14 c0          	unpcklpd xmm0,xmm0
100f83dd:	f2 0f 10 dc          	movsd  xmm3,xmm4
100f83e1:	f2 0f 5c e2          	subsd  xmm4,xmm2
100f83e5:	66 0f 59 e8          	mulpd  xmm5,xmm0
100f83e9:	66 0f 5c c2          	subpd  xmm0,xmm2
100f83ed:	66 0f 28 35 50 11 16 	movapd xmm6,XMMWORD PTR ds:0x10161150
100f83f4:	10 
100f83f5:	f2 0f 59 fc          	mulsd  xmm7,xmm4
100f83f9:	f2 0f 5c dc          	subsd  xmm3,xmm4
100f83fd:	66 0f 59 e8          	mulpd  xmm5,xmm0
100f8401:	66 0f 59 c0          	mulpd  xmm0,xmm0
100f8405:	f2 0f 5c da          	subsd  xmm3,xmm2
100f8409:	66 0f 28 10          	movapd xmm2,XMMWORD PTR [eax]
100f840d:	f2 0f 5c cb          	subsd  xmm1,xmm3
100f8411:	66 0f 12 58 18       	movlpd xmm3,QWORD PTR [eax+0x18]
100f8416:	f2 0f 58 d3          	addsd  xmm2,xmm3
100f841a:	f2 0f 5c fa          	subsd  xmm7,xmm2
100f841e:	f2 0f 59 d4          	mulsd  xmm2,xmm4
100f8422:	66 0f 59 f0          	mulpd  xmm6,xmm0
100f8426:	f2 0f 59 dc          	mulsd  xmm3,xmm4
100f842a:	66 0f 59 d0          	mulpd  xmm2,xmm0
100f842e:	66 0f 59 c0          	mulpd  xmm0,xmm0
100f8432:	66 0f 58 2d 60 11 16 	addpd  xmm5,XMMWORD PTR ds:0x10161160
100f8439:	10 
100f843a:	f2 0f 59 20          	mulsd  xmm4,QWORD PTR [eax]
100f843e:	66 0f 58 35 40 11 16 	addpd  xmm6,XMMWORD PTR ds:0x10161140
100f8445:	10 
100f8446:	66 0f 59 e8          	mulpd  xmm5,xmm0
100f844a:	f2 0f 10 c3          	movsd  xmm0,xmm3
100f844e:	f2 0f 58 58 08       	addsd  xmm3,QWORD PTR [eax+0x8]
100f8453:	f2 0f 59 cf          	mulsd  xmm1,xmm7
100f8457:	f2 0f 10 fc          	movsd  xmm7,xmm4
100f845b:	f2 0f 58 e3          	addsd  xmm4,xmm3
100f845f:	66 0f 58 f5          	addpd  xmm6,xmm5
100f8463:	66 0f 12 68 08       	movlpd xmm5,QWORD PTR [eax+0x8]
100f8468:	f2 0f 5c eb          	subsd  xmm5,xmm3
100f846c:	f2 0f 5c dc          	subsd  xmm3,xmm4
100f8470:	f2 0f 58 48 10       	addsd  xmm1,QWORD PTR [eax+0x10]
100f8475:	66 0f 59 f2          	mulpd  xmm6,xmm2
100f8479:	f2 0f 58 e8          	addsd  xmm5,xmm0
100f847d:	f2 0f 58 df          	addsd  xmm3,xmm7
100f8481:	f2 0f 58 cd          	addsd  xmm1,xmm5
100f8485:	f2 0f 58 cb          	addsd  xmm1,xmm3
100f8489:	f2 0f 58 ce          	addsd  xmm1,xmm6
100f848d:	66 0f 15 f6          	unpckhpd xmm6,xmm6
100f8491:	f2 0f 58 ce          	addsd  xmm1,xmm6
100f8495:	f2 0f 58 e1          	addsd  xmm4,xmm1
100f8499:	66 0f 28 c4          	movapd xmm0,xmm4
100f849d:	c3                   	ret
100f849e:	7f 2c                	jg     0x100f84cc
100f84a0:	66 c1 e8 04          	shr    ax,0x4
100f84a4:	66 3d fd 0c          	cmp    ax,0xcfd
100f84a8:	75 09                	jne    0x100f84b3
100f84aa:	f2 0f 59 05 c0 11 16 	mulsd  xmm0,QWORD PTR ds:0x101611c0
100f84b1:	10 
100f84b2:	c3                   	ret
100f84b3:	66 0f 12 1d b0 11 16 	movlpd xmm3,QWORD PTR ds:0x101611b0
100f84ba:	10 
100f84bb:	f2 0f 59 d8          	mulsd  xmm3,xmm0
100f84bf:	f2 0f 5c d8          	subsd  xmm3,xmm0
100f84c3:	f2 0f 59 1d b8 11 16 	mulsd  xmm3,QWORD PTR ds:0x101611b8
100f84ca:	10 
100f84cb:	c3                   	ret
100f84cc:	83 ec 08             	sub    esp,0x8
100f84cf:	66 0f d6 04 24       	movq   QWORD PTR [esp],xmm0
100f84d4:	e8 86 16 02 00       	call   0x10119b5f
100f84d9:	dd 1c 24             	fstp   QWORD PTR [esp]
100f84dc:	f3 0f 7e 04 24       	movq   xmm0,QWORD PTR [esp]
100f84e1:	83 c4 08             	add    esp,0x8
100f84e4:	c3                   	ret
