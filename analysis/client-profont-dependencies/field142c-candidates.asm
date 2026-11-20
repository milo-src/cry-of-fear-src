100202b2:	c3                   	ret
100202b3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100202b8:	b9 16 00 00 00       	mov    ecx,0x16
100202bd:	56                   	push   esi
100202be:	57                   	push   edi
100202bf:	be 78 0a 14 10       	mov    esi,0x10140a78
100202c4:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
100202ca:	81 c7 d4 00 00 00    	add    edi,0xd4
100202d0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100202d2:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]

100202d2:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100202d5:	33 cd                	xor    ecx,ebp
100202d7:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
100202d9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100202de:	5f                   	pop    edi
100202df:	5e                   	pop    esi
100202e0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100202e6:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100202ed:	00 7f 43 
100202f0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100202de:	5f                   	pop    edi
100202df:	5e                   	pop    esi
100202e0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100202e6:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100202ed:	00 7f 43 
100202f0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100202f5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100202fb:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10020302:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020307:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100202e6:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100202ed:	00 7f 43 
100202f0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100202f5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100202fb:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10020302:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020307:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1002030d:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10020314:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020319:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100202f5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100202fb:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10020302:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020307:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1002030d:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10020314:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020319:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1002031f:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
10020326:	00 00 00 
10020329:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1002030d:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10020314:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10020319:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1002031f:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
10020326:	00 00 00 
10020329:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1002032e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10020334:	c7 80 bc 00 00 00 05 	mov    DWORD PTR [eax+0xbc],0x5
1002033b:	00 00 00 
1002033e:	e8 7d 3f 09 00       	call   0x100b42c0

100301a0:	f7 d2                	not    edx
100301a2:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
100301a5:	89 56 1c             	mov    DWORD PTR [esi+0x1c],edx
100301a8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100301ad:	85 c0                	test   eax,eax
100301af:	0f 84 19 01 00 00    	je     0x100302ce
100301b5:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
100301bb:	85 c9                	test   ecx,ecx
100301bd:	74 74                	je     0x10030233
100301bf:	8b 89 78 03 00 00    	mov    ecx,DWORD PTR [ecx+0x378]

100301cf:	ff 50 04             	call   DWORD PTR [eax+0x4]
100301d2:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100301d7:	8d 55 f8             	lea    edx,[ebp-0x8]
100301da:	52                   	push   edx
100301db:	8d 55 10             	lea    edx,[ebp+0x10]
100301de:	52                   	push   edx
100301df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100301e5:	8b 88 7c 03 00 00    	mov    ecx,DWORD PTR [eax+0x37c]
100301eb:	8b 01                	mov    eax,DWORD PTR [ecx]
100301ed:	ff 50 04             	call   DWORD PTR [eax+0x4]

100301de:	52                   	push   edx
100301df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100301e5:	8b 88 7c 03 00 00    	mov    ecx,DWORD PTR [eax+0x37c]
100301eb:	8b 01                	mov    eax,DWORD PTR [ecx]
100301ed:	ff 50 04             	call   DWORD PTR [eax+0x4]
100301f0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100301f5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100301fb:	8b 88 78 03 00 00    	mov    ecx,DWORD PTR [eax+0x378]
10030201:	a1 d0 2b 1b 10       	mov    eax,ds:0x101b2bd0
10030206:	f7 d8                	neg    eax

10030209:	8b 11                	mov    edx,DWORD PTR [ecx]
1003020b:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1003020e:	ff 12                	call   DWORD PTR [edx]
10030210:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10030215:	ff 35 34 f4 18 10    	push   DWORD PTR ds:0x1018f434
1003021b:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1003021e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10030224:	8b 88 7c 03 00 00    	mov    ecx,DWORD PTR [eax+0x37c]
1003022a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003022c:	ff 10                	call   DWORD PTR [eax]

10039443:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10039446:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10039449:	50                   	push   eax
1003944a:	e8 01 74 04 00       	call   0x10080850
1003944f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039454:	83 c4 08             	add    esp,0x8
10039457:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003945e:	0f 84 e9 00 00 00    	je     0x1003954d
10039464:	e8 f7 75 04 00       	call   0x10080a60
10039469:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600

1003944f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039454:	83 c4 08             	add    esp,0x8
10039457:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003945e:	0f 84 e9 00 00 00    	je     0x1003954d
10039464:	e8 f7 75 04 00       	call   0x10080a60
10039469:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003946f:	8b 91 2c 14 00 00    	mov    edx,DWORD PTR [ecx+0x142c]
10039475:	81 c2 98 0e 00 00    	add    edx,0xe98
1003947b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10039480:	8a 08                	mov    cl,BYTE PTR [eax]

10039485:	88 0a                	mov    BYTE PTR [edx],cl
10039487:	8d 52 01             	lea    edx,[edx+0x1]
1003948a:	84 c9                	test   cl,cl
1003948c:	75 f2                	jne    0x10039480
1003948e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039493:	68 00 01 00 00       	push   0x100
10039498:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003949e:	c7 80 2c 0f 00 00 00 	mov    DWORD PTR [eax+0xf2c],0x437f0000
100394a5:	00 7f 43 
100394a8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003948e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039493:	68 00 01 00 00       	push   0x100
10039498:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003949e:	c7 80 2c 0f 00 00 00 	mov    DWORD PTR [eax+0xf2c],0x437f0000
100394a5:	00 7f 43 
100394a8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394ad:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394b3:	88 88 30 0f 00 00    	mov    BYTE PTR [eax+0xf30],cl
100394b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003949e:	c7 80 2c 0f 00 00 00 	mov    DWORD PTR [eax+0xf2c],0x437f0000
100394a5:	00 7f 43 
100394a8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394ad:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394b3:	88 88 30 0f 00 00    	mov    BYTE PTR [eax+0xf30],cl
100394b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394c4:	88 88 1e 0f 00 00    	mov    BYTE PTR [eax+0xf1e],cl
100394ca:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394cf:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100394ad:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394b3:	88 88 30 0f 00 00    	mov    BYTE PTR [eax+0xf30],cl
100394b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394c4:	88 88 1e 0f 00 00    	mov    BYTE PTR [eax+0xf1e],cl
100394ca:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394cf:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394d5:	c7 80 34 0f 00 00 00 	mov    DWORD PTR [eax+0xf34],0x0
100394dc:	00 00 00 
100394df:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100394c4:	88 88 1e 0f 00 00    	mov    BYTE PTR [eax+0xf1e],cl
100394ca:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394cf:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394d5:	c7 80 34 0f 00 00 00 	mov    DWORD PTR [eax+0xf34],0x0
100394dc:	00 00 00 
100394df:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394e4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394ea:	c7 80 38 0f 00 00 00 	mov    DWORD PTR [eax+0xf38],0x0
100394f1:	00 00 00 
100394f4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100394dc:	00 00 00 
100394df:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394e4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394ea:	c7 80 38 0f 00 00 00 	mov    DWORD PTR [eax+0xf38],0x0
100394f1:	00 00 00 
100394f4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100394f9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100394ff:	c7 80 3c 0f 00 00 00 	mov    DWORD PTR [eax+0xf3c],0x0
10039506:	00 00 00 
10039509:	e8 52 75 04 00       	call   0x10080a60

10039573:	a1 00 06 19 10       	mov    eax,ds:0x10190600
10039578:	33 c5                	xor    eax,ebp
1003957a:	50                   	push   eax
1003957b:	8d 45 f4             	lea    eax,[ebp-0xc]
1003957e:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10039584:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039589:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10039590:	0f 84 36 02 00 00    	je     0x100397cc
10039596:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10039599:	ff 75 10             	push   DWORD PTR [ebp+0x10]

10039596:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10039599:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1003959c:	e8 af 72 04 00       	call   0x10080850
100395a1:	83 c4 08             	add    esp,0x8
100395a4:	e8 07 73 04 00       	call   0x100808b0
100395a9:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
100395af:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
100395b5:	89 81 64 0f 00 00    	mov    DWORD PTR [ecx+0xf64],eax
100395bb:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395c0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100395a1:	83 c4 08             	add    esp,0x8
100395a4:	e8 07 73 04 00       	call   0x100808b0
100395a9:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
100395af:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
100395b5:	89 81 64 0f 00 00    	mov    DWORD PTR [ecx+0xf64],eax
100395bb:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395c0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395c6:	c7 80 58 0f 00 00 ff 	mov    DWORD PTR [eax+0xf58],0xff
100395cd:	00 00 00 
100395d0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100395b5:	89 81 64 0f 00 00    	mov    DWORD PTR [ecx+0xf64],eax
100395bb:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395c0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395c6:	c7 80 58 0f 00 00 ff 	mov    DWORD PTR [eax+0xf58],0xff
100395cd:	00 00 00 
100395d0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395d5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395db:	c6 80 5d 0f 00 00 00 	mov    BYTE PTR [eax+0xf5d],0x0
100395e2:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395e7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100395c6:	c7 80 58 0f 00 00 ff 	mov    DWORD PTR [eax+0xf58],0xff
100395cd:	00 00 00 
100395d0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395d5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395db:	c6 80 5d 0f 00 00 00 	mov    BYTE PTR [eax+0xf5d],0x0
100395e2:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395e7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395ed:	c7 80 60 0f 00 00 00 	mov    DWORD PTR [eax+0xf60],0x0
100395f4:	00 00 00 
100395f7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100395db:	c6 80 5d 0f 00 00 00 	mov    BYTE PTR [eax+0xf5d],0x0
100395e2:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395e7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100395ed:	c7 80 60 0f 00 00 00 	mov    DWORD PTR [eax+0xf60],0x0
100395f4:	00 00 00 
100395f7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100395fc:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039602:	8b 80 64 0f 00 00    	mov    eax,DWORD PTR [eax+0xf64]
10039608:	83 f8 06             	cmp    eax,0x6
1003960b:	77 50                	ja     0x1003965d

10039637:	68 60 61 14 10       	push   0x10146160
1003963c:	eb 05                	jmp    0x10039643
1003963e:	68 7c 61 14 10       	push   0x1014617c
10039643:	e8 f8 ef fc ff       	call   0x10008640
10039648:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003964e:	83 c4 04             	add    esp,0x4
10039651:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039657:	89 81 ec 0f 00 00    	mov    DWORD PTR [ecx+0xfec],eax
1003965d:	68 c0 00 00 00       	push   0xc0
10039662:	e8 64 ae 07 00       	call   0x100b44cb

10039667:	83 c4 04             	add    esp,0x4
1003966a:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1003966d:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10039674:	85 c0                	test   eax,eax
10039676:	74 1d                	je     0x10039695
10039678:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003967e:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039684:	ff b1 ec 0f 00 00    	push   DWORD PTR [ecx+0xfec]
1003968a:	8b c8                	mov    ecx,eax
1003968c:	e8 3f a1 07 00       	call   0x100b37d0

1003968c:	e8 3f a1 07 00       	call   0x100b37d0
10039691:	8b c8                	mov    ecx,eax
10039693:	eb 02                	jmp    0x10039697
10039695:	33 c9                	xor    ecx,ecx
10039697:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003969c:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
100396a3:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100396a9:	89 88 d4 0f 00 00    	mov    DWORD PTR [eax+0xfd4],ecx
100396af:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100396b4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10039695:	33 c9                	xor    ecx,ecx
10039697:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003969c:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
100396a3:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100396a9:	89 88 d4 0f 00 00    	mov    DWORD PTR [eax+0xfd4],ecx
100396af:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100396b4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100396ba:	50                   	push   eax
100396bb:	8b 88 d4 0f 00 00    	mov    ecx,DWORD PTR [eax+0xfd4]
100396c1:	8b 11                	mov    edx,DWORD PTR [ecx]

100396b4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100396ba:	50                   	push   eax
100396bb:	8b 88 d4 0f 00 00    	mov    ecx,DWORD PTR [eax+0xfd4]
100396c1:	8b 11                	mov    edx,DWORD PTR [ecx]
100396c3:	ff 52 40             	call   DWORD PTR [edx+0x40]
100396c6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100396cb:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100396d1:	8b 88 d4 0f 00 00    	mov    ecx,DWORD PTR [eax+0xfd4]
100396d7:	8b 01                	mov    eax,DWORD PTR [ecx]
100396d9:	ff 50 18             	call   DWORD PTR [eax+0x18]

100396e7:	2b c2                	sub    eax,edx
100396e9:	d1 f9                	sar    ecx,1
100396eb:	8b f0                	mov    esi,eax
100396ed:	d1 fe                	sar    esi,1
100396ef:	2b f1                	sub    esi,ecx
100396f1:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
100396f7:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
100396fd:	8b 89 d4 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfd4]
10039703:	8b 11                	mov    edx,DWORD PTR [ecx]
10039705:	ff 52 1c             	call   DWORD PTR [edx+0x1c]

10039715:	d1 f9                	sar    ecx,1
10039717:	d1 f8                	sar    eax,1
10039719:	2b c1                	sub    eax,ecx
1003971b:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039721:	50                   	push   eax
10039722:	56                   	push   esi
10039723:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039729:	8b 89 d4 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfd4]
1003972f:	8b 11                	mov    edx,DWORD PTR [ecx]
10039731:	ff 12                	call   DWORD PTR [edx]

10039729:	8b 89 d4 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfd4]
1003972f:	8b 11                	mov    edx,DWORD PTR [ecx]
10039731:	ff 12                	call   DWORD PTR [edx]
10039733:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039738:	83 ec 0c             	sub    esp,0xc
1003973b:	8b cc                	mov    ecx,esp
1003973d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039743:	68 ff 00 00 00       	push   0xff
10039748:	68 ff 00 00 00       	push   0xff
1003974d:	68 ff 00 00 00       	push   0xff

10039758:	68 ff 00 00 00       	push   0xff
1003975d:	e8 2e a1 07 00       	call   0x100b3890
10039762:	8b 06                	mov    eax,DWORD PTR [esi]
10039764:	8b ce                	mov    ecx,esi
10039766:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10039769:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003976e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039774:	83 b8 64 0f 00 00 00 	cmp    DWORD PTR [eax+0xf64],0x0
1003977b:	75 16                	jne    0x10039793
1003977d:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0

10039791:	eb 14                	jmp    0x100397a7
10039793:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10039799:	d8 05 e8 ee 13 10    	fadd   DWORD PTR ds:0x1013eee8
1003979f:	d9 5d f0             	fstp   DWORD PTR [ebp-0x10]
100397a2:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100397a7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100397ac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100397b2:	f3 0f 11 80 60 0f 00 	movss  DWORD PTR [eax+0xf60],xmm0
100397b9:	00 
100397ba:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100397a2:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100397a7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100397ac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100397b2:	f3 0f 11 80 60 0f 00 	movss  DWORD PTR [eax+0xf60],xmm0
100397b9:	00 
100397ba:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100397bf:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100397c5:	c6 80 d4 01 00 00 01 	mov    BYTE PTR [eax+0x1d4],0x1
100397cc:	b8 01 00 00 00       	mov    eax,0x1
100397d1:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]

10039813:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10039816:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10039819:	50                   	push   eax
1003981a:	e8 31 70 04 00       	call   0x10080850
1003981f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039824:	83 c4 08             	add    esp,0x8
10039827:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003982e:	0f 84 ca 01 00 00    	je     0x100399fe
10039834:	53                   	push   ebx
10039835:	56                   	push   esi

1003986e:	50                   	push   eax
1003986f:	8d 85 fc fc ff ff    	lea    eax,[ebp-0x304]
10039875:	50                   	push   eax
10039876:	e8 b5 10 00 00       	call   0x1003a930
1003987b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039880:	83 c4 14             	add    esp,0x14
10039883:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039889:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10039890:	00 00 00 
10039893:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600

10039880:	83 c4 14             	add    esp,0x14
10039883:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039889:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10039890:	00 00 00 
10039893:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600
10039899:	89 9d f4 fc ff ff    	mov    DWORD PTR [ebp-0x30c],ebx
1003989f:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
100398a5:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
100398ab:	8b d1                	mov    edx,ecx
100398ad:	8d 72 01             	lea    esi,[edx+0x1]

100398e8:	3c 40                	cmp    al,0x40
100398ea:	0f b6 c8             	movzx  ecx,al
100398ed:	b8 20 00 00 00       	mov    eax,0x20
100398f2:	0f 44 c8             	cmove  ecx,eax
100398f5:	88 8c 15 fc fe ff ff 	mov    BYTE PTR [ebp+edx*1-0x104],cl
100398fc:	42                   	inc    edx
100398fd:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
10039903:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
10039909:	8d 59 01             	lea    ebx,[ecx+0x1]
1003990c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]

10039921:	72 bd                	jb     0x100398e0
10039923:	81 fe 00 01 00 00    	cmp    esi,0x100
10039929:	0f 83 e2 00 00 00    	jae    0x10039a11
1003992f:	c6 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],0x0
10039936:	00 
10039937:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
1003993d:	8b 83 2c 14 00 00    	mov    eax,DWORD PTR [ebx+0x142c]
10039943:	52                   	push   edx
10039944:	8b 80 b0 03 00 00    	mov    eax,DWORD PTR [eax+0x3b0]
1003994a:	50                   	push   eax

1003994a:	50                   	push   eax
1003994b:	8b 08                	mov    ecx,DWORD PTR [eax]
1003994d:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10039953:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039958:	8d b5 f4 fc ff ff    	lea    esi,[ebp-0x30c]
1003995e:	83 c4 08             	add    esp,0x8
10039961:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039967:	56                   	push   esi
10039968:	8d b5 f0 fc ff ff    	lea    esi,[ebp-0x310]
1003996e:	56                   	push   esi

10039975:	05 04 04 00 00       	add    eax,0x404
1003997a:	50                   	push   eax
1003997b:	8b 11                	mov    edx,DWORD PTR [ecx]
1003997d:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10039980:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039985:	6a d0                	push   0xffffffd0
10039987:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003998d:	8b 88 b0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3b0]
10039993:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
10039998:	99                   	cdq

1003999b:	8b 31                	mov    esi,DWORD PTR [ecx]
1003999d:	d1 f8                	sar    eax,1
1003999f:	2d 90 01 00 00       	sub    eax,0x190
100399a4:	50                   	push   eax
100399a5:	ff 16                	call   DWORD PTR [esi]
100399a7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100399ac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100399b2:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
100399b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100399be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100399a4:	50                   	push   eax
100399a5:	ff 16                	call   DWORD PTR [esi]
100399a7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100399ac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100399b2:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
100399b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100399be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100399c4:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
100399cb:	00 00 00 
100399ce:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0

100399be:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100399c4:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
100399cb:	00 00 00 
100399ce:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100399d4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100399d9:	d8 05 30 f5 13 10    	fadd   DWORD PTR ds:0x1013f530
100399df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100399e5:	d9 9d f8 fc ff ff    	fstp   DWORD PTR [ebp-0x308]
100399eb:	f3 0f 10 85 f8 fc ff 	movss  xmm0,DWORD PTR [ebp-0x308]
100399f2:	ff 

10039a1d:	cc                   	int3
10039a1e:	cc                   	int3
10039a1f:	cc                   	int3
10039a20:	55                   	push   ebp
10039a21:	8b ec                	mov    ebp,esp
10039a23:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039a28:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10039a2f:	74 2f                	je     0x10039a60
10039a31:	56                   	push   esi
10039a32:	ff 75 0c             	push   DWORD PTR [ebp+0xc]

10039a38:	e8 13 6e 04 00       	call   0x10080850
10039a3d:	83 c4 08             	add    esp,0x8
10039a40:	e8 6b 6e 04 00       	call   0x100808b0
10039a45:	8b f0                	mov    esi,eax
10039a47:	e8 64 6e 04 00       	call   0x100808b0
10039a4c:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039a52:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039a58:	89 84 b1 d8 02 00 00 	mov    DWORD PTR [ecx+esi*4+0x2d8],eax
10039a5f:	5e                   	pop    esi
10039a60:	b8 01 00 00 00       	mov    eax,0x1

10039a6d:	cc                   	int3
10039a6e:	cc                   	int3
10039a6f:	cc                   	int3
10039a70:	55                   	push   ebp
10039a71:	8b ec                	mov    ebp,esp
10039a73:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039a78:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10039a7f:	0f 84 c9 01 00 00    	je     0x10039c4e
10039a85:	56                   	push   esi
10039a86:	ff 75 0c             	push   DWORD PTR [ebp+0xc]

10039aa2:	83 e8 01             	sub    eax,0x1
10039aa5:	0f 84 83 00 00 00    	je     0x10039b2e
10039aab:	83 e8 01             	sub    eax,0x1
10039aae:	0f 85 99 01 00 00    	jne    0x10039c4d
10039ab4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ab9:	68 6c 60 14 10       	push   0x1014606c
10039abe:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039ac4:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039aca:	8b 30                	mov    esi,DWORD PTR [eax]
10039acc:	e8 6f eb fc ff       	call   0x10008640

10039ac4:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039aca:	8b 30                	mov    esi,DWORD PTR [eax]
10039acc:	e8 6f eb fc ff       	call   0x10008640
10039ad1:	83 c4 04             	add    esp,0x4
10039ad4:	50                   	push   eax
10039ad5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ada:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039ae0:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039ae6:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039aec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

10039ad5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ada:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039ae0:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039ae6:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039aec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039af1:	68 8c 60 14 10       	push   0x1014608c
10039af6:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039afc:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039b02:	8b 30                	mov    esi,DWORD PTR [eax]
10039b04:	e8 37 eb fc ff       	call   0x10008640

10039afc:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039b02:	8b 30                	mov    esi,DWORD PTR [eax]
10039b04:	e8 37 eb fc ff       	call   0x10008640
10039b09:	83 c4 04             	add    esp,0x4
10039b0c:	50                   	push   eax
10039b0d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b12:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039b18:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039b1e:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b24:	68 a8 60 14 10       	push   0x101460a8

10039b18:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039b1e:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b24:	68 a8 60 14 10       	push   0x101460a8
10039b29:	e9 ec 00 00 00       	jmp    0x10039c1a
10039b2e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b33:	68 08 60 14 10       	push   0x10146008
10039b38:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039b3e:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039b44:	8b 30                	mov    esi,DWORD PTR [eax]
10039b46:	e8 f5 ea fc ff       	call   0x10008640

10039b3e:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039b44:	8b 30                	mov    esi,DWORD PTR [eax]
10039b46:	e8 f5 ea fc ff       	call   0x10008640
10039b4b:	83 c4 04             	add    esp,0x4
10039b4e:	50                   	push   eax
10039b4f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b54:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039b5a:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039b60:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b66:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

10039b4f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b54:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039b5a:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039b60:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b66:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b6b:	68 28 60 14 10       	push   0x10146028
10039b70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039b76:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039b7c:	8b 30                	mov    esi,DWORD PTR [eax]
10039b7e:	e8 bd ea fc ff       	call   0x10008640

10039b76:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039b7c:	8b 30                	mov    esi,DWORD PTR [eax]
10039b7e:	e8 bd ea fc ff       	call   0x10008640
10039b83:	83 c4 04             	add    esp,0x4
10039b86:	50                   	push   eax
10039b87:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039b8c:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039b92:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039b98:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b9e:	68 44 60 14 10       	push   0x10146044

10039b92:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039b98:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039b9e:	68 44 60 14 10       	push   0x10146044
10039ba3:	eb 75                	jmp    0x10039c1a
10039ba5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039baa:	68 a8 5f 14 10       	push   0x10145fa8
10039baf:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039bb5:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039bbb:	8b 30                	mov    esi,DWORD PTR [eax]
10039bbd:	e8 7e ea fc ff       	call   0x10008640

10039bb5:	8b 80 cc 0f 00 00    	mov    eax,DWORD PTR [eax+0xfcc]
10039bbb:	8b 30                	mov    esi,DWORD PTR [eax]
10039bbd:	e8 7e ea fc ff       	call   0x10008640
10039bc2:	83 c4 04             	add    esp,0x4
10039bc5:	50                   	push   eax
10039bc6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039bcb:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039bd1:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039bd7:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039bdd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

10039bc6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039bcb:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039bd1:	8b 89 cc 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfcc]
10039bd7:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039bdd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039be2:	68 c8 5f 14 10       	push   0x10145fc8
10039be7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039bed:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039bf3:	8b 30                	mov    esi,DWORD PTR [eax]
10039bf5:	e8 46 ea fc ff       	call   0x10008640

10039bed:	8b 80 c8 0f 00 00    	mov    eax,DWORD PTR [eax+0xfc8]
10039bf3:	8b 30                	mov    esi,DWORD PTR [eax]
10039bf5:	e8 46 ea fc ff       	call   0x10008640
10039bfa:	83 c4 04             	add    esp,0x4
10039bfd:	50                   	push   eax
10039bfe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039c03:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039c09:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039c0f:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039c15:	68 e4 5f 14 10       	push   0x10145fe4

10039bfe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039c03:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039c09:	8b 89 c8 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfc8]
10039c0f:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039c15:	68 e4 5f 14 10       	push   0x10145fe4
10039c1a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039c1f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039c25:	8b 80 d0 0f 00 00    	mov    eax,DWORD PTR [eax+0xfd0]
10039c2b:	8b 30                	mov    esi,DWORD PTR [eax]
10039c2d:	e8 0e ea fc ff       	call   0x10008640

10039c25:	8b 80 d0 0f 00 00    	mov    eax,DWORD PTR [eax+0xfd0]
10039c2b:	8b 30                	mov    esi,DWORD PTR [eax]
10039c2d:	e8 0e ea fc ff       	call   0x10008640
10039c32:	83 c4 04             	add    esp,0x4
10039c35:	50                   	push   eax
10039c36:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039c3b:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10039c41:	8b 89 d0 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xfd0]
10039c47:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10039c4d:	5e                   	pop    esi

10039caa:	8b f8                	mov    edi,eax
10039cac:	e8 ff 6b 04 00       	call   0x100808b0
10039cb1:	e8 fa 6b 04 00       	call   0x100808b0
10039cb6:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039cbc:	85 c9                	test   ecx,ecx
10039cbe:	0f 84 4a 02 00 00    	je     0x10039f0e
10039cc4:	83 b9 2c 14 00 00 00 	cmp    DWORD PTR [ecx+0x142c],0x0
10039ccb:	0f 84 3d 02 00 00    	je     0x10039f0e
10039cd1:	85 c0                	test   eax,eax
10039cd3:	74 15                	je     0x10039cea

10039cea:	68 3c 1c 14 10       	push   0x10141c3c
10039cef:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
10039cf5:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10039cf8:	f3 0f 2c 5d fc       	cvttss2si ebx,DWORD PTR [ebp-0x4]
10039cfd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039d02:	83 c4 04             	add    esp,0x4
10039d05:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039d0b:	8b 88 64 0e 00 00    	mov    ecx,DWORD PTR [eax+0xe64]
10039d11:	8b 01                	mov    eax,DWORD PTR [ecx]
10039d13:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]

10039d0b:	8b 88 64 0e 00 00    	mov    ecx,DWORD PTR [eax+0xe64]
10039d11:	8b 01                	mov    eax,DWORD PTR [ecx]
10039d13:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
10039d16:	ff d0                	call   eax
10039d18:	84 c0                	test   al,al
10039d1a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039d1f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039d25:	0f 85 dc 01 00 00    	jne    0x10039f07
10039d2b:	83 ec 0c             	sub    esp,0xc
10039d2e:	c7 80 70 0e 00 00 ff 	mov    DWORD PTR [eax+0xe70],0xff

10039d2b:	83 ec 0c             	sub    esp,0xc
10039d2e:	c7 80 70 0e 00 00 ff 	mov    DWORD PTR [eax+0xe70],0xff
10039d35:	00 00 00 
10039d38:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039d3d:	8b cc                	mov    ecx,esp
10039d3f:	68 ff 00 00 00       	push   0xff
10039d44:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039d4a:	68 ff 00 00 00       	push   0xff
10039d4f:	68 ff 00 00 00       	push   0xff
10039d54:	68 ff 00 00 00       	push   0xff

10039d59:	8b b0 68 0e 00 00    	mov    esi,DWORD PTR [eax+0xe68]
10039d5f:	e8 2c 9b 07 00       	call   0x100b3890
10039d64:	8b 06                	mov    eax,DWORD PTR [esi]
10039d66:	8b ce                	mov    ecx,esi
10039d68:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10039d6b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039d70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039d76:	c6 80 6c 0e 00 00 01 	mov    BYTE PTR [eax+0xe6c],0x1
10039d7d:	83 fb 07             	cmp    ebx,0x7
10039d80:	77 07                	ja     0x10039d89

10039ea0:	83 ff 02             	cmp    edi,0x2
10039ea3:	75 1f                	jne    0x10039ec4
10039ea5:	68 00 5c 14 10       	push   0x10145c00
10039eaa:	e8 91 e7 fc ff       	call   0x10008640
10039eaf:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039eb5:	83 c4 04             	add    esp,0x4
10039eb8:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039ebe:	89 81 68 0e 00 00    	mov    DWORD PTR [ecx+0xe68],eax
10039ec4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ec9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10039eaa:	e8 91 e7 fc ff       	call   0x10008640
10039eaf:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039eb5:	83 c4 04             	add    esp,0x4
10039eb8:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039ebe:	89 81 68 0e 00 00    	mov    DWORD PTR [ecx+0xe68],eax
10039ec4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ec9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039ecf:	8b 88 64 0e 00 00    	mov    ecx,DWORD PTR [eax+0xe64]
10039ed5:	ff b0 68 0e 00 00    	push   DWORD PTR [eax+0xe68]
10039edb:	8b 11                	mov    edx,DWORD PTR [ecx]

10039ecf:	8b 88 64 0e 00 00    	mov    ecx,DWORD PTR [eax+0xe64]
10039ed5:	ff b0 68 0e 00 00    	push   DWORD PTR [eax+0xe68]
10039edb:	8b 11                	mov    edx,DWORD PTR [ecx]
10039edd:	ff 92 fc 01 00 00    	call   DWORD PTR [edx+0x1fc]
10039ee3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ee8:	6a 01                	push   0x1
10039eea:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039ef0:	8b 88 64 0e 00 00    	mov    ecx,DWORD PTR [eax+0xe64]
10039ef6:	8b 01                	mov    eax,DWORD PTR [ecx]
10039ef8:	ff 50 24             	call   DWORD PTR [eax+0x24]

10039f3d:	cc                   	int3
10039f3e:	cc                   	int3
10039f3f:	cc                   	int3
10039f40:	55                   	push   ebp
10039f41:	8b ec                	mov    ebp,esp
10039f43:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039f48:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10039f4f:	0f 84 e4 01 00 00    	je     0x1003a139
10039f55:	53                   	push   ebx
10039f56:	56                   	push   esi

10039f72:	8b f8                	mov    edi,eax
10039f74:	e8 37 69 04 00       	call   0x100808b0
10039f79:	85 c0                	test   eax,eax
10039f7b:	74 7a                	je     0x10039ff7
10039f7d:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039f83:	6a 00                	push   0x0
10039f85:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039f8b:	c6 81 9c 03 00 00 00 	mov    BYTE PTR [ecx+0x39c],0x0
10039f92:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039f98:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]

10039f7b:	74 7a                	je     0x10039ff7
10039f7d:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039f83:	6a 00                	push   0x0
10039f85:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039f8b:	c6 81 9c 03 00 00 00 	mov    BYTE PTR [ecx+0x39c],0x0
10039f92:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10039f98:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039f9e:	8b 89 84 03 00 00    	mov    ecx,DWORD PTR [ecx+0x384]
10039fa4:	8b 01                	mov    eax,DWORD PTR [ecx]
10039fa6:	ff 50 24             	call   DWORD PTR [eax+0x24]

10039f98:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10039f9e:	8b 89 84 03 00 00    	mov    ecx,DWORD PTR [ecx+0x384]
10039fa4:	8b 01                	mov    eax,DWORD PTR [ecx]
10039fa6:	ff 50 24             	call   DWORD PTR [eax+0x24]
10039fa9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039fae:	6a 00                	push   0x0
10039fb0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039fb6:	8b 88 98 03 00 00    	mov    ecx,DWORD PTR [eax+0x398]
10039fbc:	8b 01                	mov    eax,DWORD PTR [ecx]
10039fbe:	ff 50 24             	call   DWORD PTR [eax+0x24]

10039fbe:	ff 50 24             	call   DWORD PTR [eax+0x24]
10039fc1:	be 88 03 00 00       	mov    esi,0x388
10039fc6:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
10039fcd:	00 00 00 
10039fd0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039fd5:	6a 00                	push   0x0
10039fd7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10039fdd:	8b 0c 06             	mov    ecx,DWORD PTR [esi+eax*1]
10039fe0:	8b 01                	mov    eax,DWORD PTR [ecx]
10039fe2:	ff 50 24             	call   DWORD PTR [eax+0x24]

10039fe8:	81 fe 98 03 00 00    	cmp    esi,0x398
10039fee:	7c e0                	jl     0x10039fd0
10039ff0:	6a 00                	push   0x0
10039ff2:	e9 f8 00 00 00       	jmp    0x1003a0ef
10039ff7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ffc:	6a 01                	push   0x1
10039ffe:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a004:	c6 80 9c 03 00 00 01 	mov    BYTE PTR [eax+0x39c],0x1
1003a00b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a010:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10039ff2:	e9 f8 00 00 00       	jmp    0x1003a0ef
10039ff7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10039ffc:	6a 01                	push   0x1
10039ffe:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a004:	c6 80 9c 03 00 00 01 	mov    BYTE PTR [eax+0x39c],0x1
1003a00b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a010:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a016:	8b 88 84 03 00 00    	mov    ecx,DWORD PTR [eax+0x384]
1003a01c:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a01e:	ff 50 24             	call   DWORD PTR [eax+0x24]

1003a010:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a016:	8b 88 84 03 00 00    	mov    ecx,DWORD PTR [eax+0x384]
1003a01c:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a01e:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003a021:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a026:	6a 01                	push   0x1
1003a028:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a02e:	8b 88 98 03 00 00    	mov    ecx,DWORD PTR [eax+0x398]
1003a034:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a036:	ff 50 24             	call   DWORD PTR [eax+0x24]

1003a034:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a036:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003a039:	be 88 03 00 00       	mov    esi,0x388
1003a03e:	66 90                	xchg   ax,ax
1003a040:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a045:	6a 01                	push   0x1
1003a047:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a04d:	8b 0c 06             	mov    ecx,DWORD PTR [esi+eax*1]
1003a050:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a052:	ff 50 24             	call   DWORD PTR [eax+0x24]

1003a052:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003a055:	83 c6 04             	add    esi,0x4
1003a058:	81 fe 98 03 00 00    	cmp    esi,0x398
1003a05e:	7c e0                	jl     0x1003a040
1003a060:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a065:	68 88 5f 14 10       	push   0x10145f88
1003a06a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a070:	8b 80 e8 03 00 00    	mov    eax,DWORD PTR [eax+0x3e8]
1003a076:	8b 30                	mov    esi,DWORD PTR [eax]
1003a078:	e8 c3 e5 fc ff       	call   0x10008640

1003a070:	8b 80 e8 03 00 00    	mov    eax,DWORD PTR [eax+0x3e8]
1003a076:	8b 30                	mov    esi,DWORD PTR [eax]
1003a078:	e8 c3 e5 fc ff       	call   0x10008640
1003a07d:	83 c4 04             	add    esp,0x4
1003a080:	50                   	push   eax
1003a081:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a086:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a08c:	8b 89 e8 03 00 00    	mov    ecx,DWORD PTR [ecx+0x3e8]
1003a092:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
1003a098:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a086:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a08c:	8b 89 e8 03 00 00    	mov    ecx,DWORD PTR [ecx+0x3e8]
1003a092:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
1003a098:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a09d:	68 58 02 00 00       	push   0x258
1003a0a2:	68 20 03 00 00       	push   0x320
1003a0a7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a0ad:	8b 88 e8 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e8]
1003a0b3:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a0b5:	ff 50 08             	call   DWORD PTR [eax+0x8]

1003a0a2:	68 20 03 00 00       	push   0x320
1003a0a7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a0ad:	8b 88 e8 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e8]
1003a0b3:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a0b5:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003a0b8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a0bd:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a0c3:	8b 88 e8 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e8]
1003a0c9:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003a0ce:	99                   	cdq

1003a0e3:	d1 f8                	sar    eax,1
1003a0e5:	2d 90 01 00 00       	sub    eax,0x190
1003a0ea:	50                   	push   eax
1003a0eb:	ff 16                	call   DWORD PTR [esi]
1003a0ed:	6a 01                	push   0x1
1003a0ef:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a0f4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a0fa:	8b 88 e8 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e8]
1003a100:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a102:	ff 50 24             	call   DWORD PTR [eax+0x24]

1003a100:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a102:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003a105:	8d 4b ff             	lea    ecx,[ebx-0x1]
1003a108:	83 f9 03             	cmp    ecx,0x3
1003a10b:	77 29                	ja     0x1003a136
1003a10d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a112:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a118:	85 ff                	test   edi,edi
1003a11a:	74 12                	je     0x1003a12e
1003a11c:	5f                   	pop    edi

1003a193:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1003a196:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1003a199:	50                   	push   eax
1003a19a:	e8 b1 66 04 00       	call   0x10080850
1003a19f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a1a4:	83 c4 08             	add    esp,0x8
1003a1a7:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003a1ae:	0f 84 69 01 00 00    	je     0x1003a31d
1003a1b4:	e8 a7 68 04 00       	call   0x10080a60
1003a1b9:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]

1003a1de:	2b ca                	sub    ecx,edx
1003a1e0:	83 f9 01             	cmp    ecx,0x1
1003a1e3:	0f 86 34 01 00 00    	jbe    0x1003a31d
1003a1e9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a1ee:	56                   	push   esi
1003a1ef:	57                   	push   edi
1003a1f0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a1f6:	8b 80 04 10 00 00    	mov    eax,DWORD PTR [eax+0x1004]
1003a1fc:	8b 30                	mov    esi,DWORD PTR [eax]
1003a1fe:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]

1003a1fe:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1003a204:	50                   	push   eax
1003a205:	e8 36 e4 fc ff       	call   0x10008640
1003a20a:	83 c4 04             	add    esp,0x4
1003a20d:	50                   	push   eax
1003a20e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a213:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a219:	8b 89 04 10 00 00    	mov    ecx,DWORD PTR [ecx+0x1004]
1003a21f:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
1003a225:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a20d:	50                   	push   eax
1003a20e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a213:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a219:	8b 89 04 10 00 00    	mov    ecx,DWORD PTR [ecx+0x1004]
1003a21f:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
1003a225:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a22a:	8b b0 2c 14 00 00    	mov    esi,DWORD PTR [eax+0x142c]
1003a230:	8b 8e 04 10 00 00    	mov    ecx,DWORD PTR [esi+0x1004]
1003a236:	8b 39                	mov    edi,DWORD PTR [ecx]
1003a238:	ff 57 18             	call   DWORD PTR [edi+0x18]

1003a236:	8b 39                	mov    edi,DWORD PTR [ecx]
1003a238:	ff 57 18             	call   DWORD PTR [edi+0x18]
1003a23b:	ff b6 14 10 00 00    	push   DWORD PTR [esi+0x1014]
1003a241:	66 0f 6e c0          	movd   xmm0,eax
1003a245:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a24a:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003a24e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a254:	8b 88 04 10 00 00    	mov    ecx,DWORD PTR [eax+0x1004]
1003a25a:	f2 0f 59 05 58 3a 14 	mulsd  xmm0,QWORD PTR ds:0x10143a58
1003a261:	10 

1003a277:	66 0f 6e c0          	movd   xmm0,eax
1003a27b:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003a27f:	f2 0f 5c c8          	subsd  xmm1,xmm0
1003a283:	f2 0f 2c c1          	cvttsd2si eax,xmm1
1003a287:	50                   	push   eax
1003a288:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a28d:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a293:	8b 89 04 10 00 00    	mov    ecx,DWORD PTR [ecx+0x1004]
1003a299:	ff 17                	call   DWORD PTR [edi]
1003a29b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a287:	50                   	push   eax
1003a288:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a28d:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a293:	8b 89 04 10 00 00    	mov    ecx,DWORD PTR [ecx+0x1004]
1003a299:	ff 17                	call   DWORD PTR [edi]
1003a29b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2a0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2a6:	c6 80 08 10 00 00 01 	mov    BYTE PTR [eax+0x1008],0x1
1003a2ad:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a2b3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a299:	ff 17                	call   DWORD PTR [edi]
1003a29b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2a0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2a6:	c6 80 08 10 00 00 01 	mov    BYTE PTR [eax+0x1008],0x1
1003a2ad:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a2b3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2b8:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2be:	d9 98 44 0f 00 00    	fstp   DWORD PTR [eax+0xf44]
1003a2c4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2c9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a2a6:	c6 80 08 10 00 00 01 	mov    BYTE PTR [eax+0x1008],0x1
1003a2ad:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a2b3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2b8:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2be:	d9 98 44 0f 00 00    	fstp   DWORD PTR [eax+0xf44]
1003a2c4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2c9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2cf:	c7 80 48 0f 00 00 00 	mov    DWORD PTR [eax+0xf48],0x3f800000
1003a2d6:	00 80 3f 
1003a2d9:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0

1003a2d6:	00 80 3f 
1003a2d9:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a2df:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a2e4:	d8 05 f0 68 14 10    	fadd   DWORD PTR ds:0x101468f0
1003a2ea:	5f                   	pop    edi
1003a2eb:	5e                   	pop    esi
1003a2ec:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a2f2:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
1003a2f8:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
1003a2ff:	ff 

1003a2f2:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
1003a2f8:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
1003a2ff:	ff 
1003a300:	f3 0f 11 80 4c 0f 00 	movss  DWORD PTR [eax+0xf4c],xmm0
1003a307:	00 
1003a308:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a30d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a313:	c7 80 50 0f 00 00 00 	mov    DWORD PTR [eax+0xf50],0x3f800000
1003a31a:	00 80 3f 
1003a31d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]

1003a35e:	cc                   	int3
1003a35f:	cc                   	int3
1003a360:	55                   	push   ebp
1003a361:	8b ec                	mov    ebp,esp
1003a363:	51                   	push   ecx
1003a364:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a369:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003a370:	74 5f                	je     0x1003a3d1
1003a372:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1003a375:	ff 75 10             	push   DWORD PTR [ebp+0x10]

1003a372:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1003a375:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1003a378:	e8 d3 64 04 00       	call   0x10080850
1003a37d:	83 c4 08             	add    esp,0x8
1003a380:	e8 2b 65 04 00       	call   0x100808b0
1003a385:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003a38b:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
1003a391:	89 81 00 10 00 00    	mov    DWORD PTR [ecx+0x1000],eax
1003a397:	e8 74 65 04 00       	call   0x10080910
1003a39c:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]

1003a39f:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1003a3a4:	0f 2f 05 ec cc 13 10 	comiss xmm0,DWORD PTR ds:0x1013ccec
1003a3ab:	76 24                	jbe    0x1003a3d1
1003a3ad:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a3b3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a3b8:	d8 45 fc             	fadd   DWORD PTR [ebp-0x4]
1003a3bb:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a3c1:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1003a3c4:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1003a3c9:	f3 0f 11 80 e4 0f 00 	movss  DWORD PTR [eax+0xfe4],xmm0

1003a3de:	cc                   	int3
1003a3df:	cc                   	int3
1003a3e0:	55                   	push   ebp
1003a3e1:	8b ec                	mov    ebp,esp
1003a3e3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a3e8:	83 ec 08             	sub    esp,0x8
1003a3eb:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1003a3f2:	0f 84 77 01 00 00    	je     0x1003a56f
1003a3f8:	53                   	push   ebx
1003a3f9:	56                   	push   esi

1003a426:	e8 e5 65 04 00       	call   0x10080a10
1003a42b:	8b d0                	mov    edx,eax
1003a42d:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
1003a430:	85 f6                	test   esi,esi
1003a432:	75 68                	jne    0x1003a49c
1003a434:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a439:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a43f:	c6 80 f0 03 00 00 00 	mov    BYTE PTR [eax+0x3f0],0x0
1003a446:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a44c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a434:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a439:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a43f:	c6 80 f0 03 00 00 00 	mov    BYTE PTR [eax+0x3f0],0x0
1003a446:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a44c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a451:	5f                   	pop    edi
1003a452:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a458:	d9 98 f4 03 00 00    	fstp   DWORD PTR [eax+0x3f4]
1003a45e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a463:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a446:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a44c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a451:	5f                   	pop    edi
1003a452:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a458:	d9 98 f4 03 00 00    	fstp   DWORD PTR [eax+0x3f4]
1003a45e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a463:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a469:	89 b0 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],esi
1003a46f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a474:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a452:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a458:	d9 98 f4 03 00 00    	fstp   DWORD PTR [eax+0x3f4]
1003a45e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a463:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a469:	89 b0 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],esi
1003a46f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a474:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a47a:	89 b0 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],esi
1003a480:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a485:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a463:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a469:	89 b0 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],esi
1003a46f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a474:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a47a:	89 b0 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],esi
1003a480:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a485:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a48b:	89 b0 00 04 00 00    	mov    DWORD PTR [eax+0x400],esi
1003a491:	b8 01 00 00 00       	mov    eax,0x1
1003a496:	5e                   	pop    esi

1003a498:	8b e5                	mov    esp,ebp
1003a49a:	5d                   	pop    ebp
1003a49b:	c3                   	ret
1003a49c:	83 fe 01             	cmp    esi,0x1
1003a49f:	75 7f                	jne    0x1003a520
1003a4a1:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4a6:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4ac:	c6 80 f0 03 00 00 01 	mov    BYTE PTR [eax+0x3f0],0x1
1003a4b3:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a4b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a4a1:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4a6:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4ac:	c6 80 f0 03 00 00 01 	mov    BYTE PTR [eax+0x3f0],0x1
1003a4b3:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a4b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4be:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003a4c1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4c7:	d9 98 f4 03 00 00    	fstp   DWORD PTR [eax+0x3f4]
1003a4cd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4d2:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a4b3:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a4b9:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4be:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003a4c1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4c7:	d9 98 f4 03 00 00    	fstp   DWORD PTR [eax+0x3f4]
1003a4cd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4d2:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4d8:	89 b8 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],edi
1003a4de:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4e3:	5f                   	pop    edi

1003a4cd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4d2:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4d8:	89 b8 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],edi
1003a4de:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4e3:	5f                   	pop    edi
1003a4e4:	5e                   	pop    esi
1003a4e5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4eb:	89 98 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],ebx
1003a4f1:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4f6:	5b                   	pop    ebx

1003a4e3:	5f                   	pop    edi
1003a4e4:	5e                   	pop    esi
1003a4e5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4eb:	89 98 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],ebx
1003a4f1:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4f6:	5b                   	pop    ebx
1003a4f7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4fd:	89 88 00 04 00 00    	mov    DWORD PTR [eax+0x400],ecx
1003a503:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a508:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]

1003a4f1:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a4f6:	5b                   	pop    ebx
1003a4f7:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a4fd:	89 88 00 04 00 00    	mov    DWORD PTR [eax+0x400],ecx
1003a503:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a508:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1003a50b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a511:	89 88 70 03 00 00    	mov    DWORD PTR [eax+0x370],ecx
1003a517:	b8 01 00 00 00       	mov    eax,0x1
1003a51c:	8b e5                	mov    esp,ebp

1003a51e:	5d                   	pop    ebp
1003a51f:	c3                   	ret
1003a520:	83 fe 02             	cmp    esi,0x2
1003a523:	75 47                	jne    0x1003a56c
1003a525:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a52a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003a52d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a533:	89 b8 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],edi
1003a539:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a53e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a523:	75 47                	jne    0x1003a56c
1003a525:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a52a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003a52d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a533:	89 b8 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],edi
1003a539:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a53e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a544:	89 98 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],ebx
1003a54a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a54f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a52d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a533:	89 b8 f8 03 00 00    	mov    DWORD PTR [eax+0x3f8],edi
1003a539:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a53e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a544:	89 98 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],ebx
1003a54a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a54f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a555:	89 88 00 04 00 00    	mov    DWORD PTR [eax+0x400],ecx
1003a55b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a560:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a53e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a544:	89 98 fc 03 00 00    	mov    DWORD PTR [eax+0x3fc],ebx
1003a54a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a54f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a555:	89 88 00 04 00 00    	mov    DWORD PTR [eax+0x400],ecx
1003a55b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a560:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a566:	89 90 70 03 00 00    	mov    DWORD PTR [eax+0x370],edx
1003a56c:	5f                   	pop    edi
1003a56d:	5e                   	pop    esi

1003a5b0:	e8 fb 62 04 00       	call   0x100808b0
1003a5b5:	89 85 18 ff ff ff    	mov    DWORD PTR [ebp-0xe8],eax
1003a5bb:	e8 f0 62 04 00       	call   0x100808b0
1003a5c0:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003a5c6:	85 c9                	test   ecx,ecx
1003a5c8:	0f 84 2e 02 00 00    	je     0x1003a7fc
1003a5ce:	8b 91 2c 14 00 00    	mov    edx,DWORD PTR [ecx+0x142c]
1003a5d4:	85 d2                	test   edx,edx
1003a5d6:	0f 84 20 02 00 00    	je     0x1003a7fc
1003a5dc:	83 e8 01             	sub    eax,0x1

1003a5ea:	83 e8 01             	sub    eax,0x1
1003a5ed:	75 16                	jne    0x1003a605
1003a5ef:	c6 82 74 03 00 00 01 	mov    BYTE PTR [edx+0x374],0x1
1003a5f6:	eb 07                	jmp    0x1003a5ff
1003a5f8:	c6 82 74 03 00 00 00 	mov    BYTE PTR [edx+0x374],0x0
1003a5ff:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003a605:	8b 81 2c 14 00 00    	mov    eax,DWORD PTR [ecx+0x142c]
1003a60b:	56                   	push   esi
1003a60c:	01 98 f8 03 00 00    	add    DWORD PTR [eax+0x3f8],ebx
1003a612:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a5f8:	c6 82 74 03 00 00 00 	mov    BYTE PTR [edx+0x374],0x0
1003a5ff:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003a605:	8b 81 2c 14 00 00    	mov    eax,DWORD PTR [ecx+0x142c]
1003a60b:	56                   	push   esi
1003a60c:	01 98 f8 03 00 00    	add    DWORD PTR [eax+0x3f8],ebx
1003a612:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a617:	8b 90 2c 14 00 00    	mov    edx,DWORD PTR [eax+0x142c]
1003a61d:	8b 8a f8 03 00 00    	mov    ecx,DWORD PTR [edx+0x3f8]
1003a623:	83 f9 3b             	cmp    ecx,0x3b
1003a626:	7e 27                	jle    0x1003a64f

1003a628:	33 f6                	xor    esi,esi
1003a62a:	8d 41 c4             	lea    eax,[ecx-0x3c]
1003a62d:	83 f9 3c             	cmp    ecx,0x3c
1003a630:	0f 4e c6             	cmovle eax,esi
1003a633:	89 82 f8 03 00 00    	mov    DWORD PTR [edx+0x3f8],eax
1003a639:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a63e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a644:	ff 80 fc 03 00 00    	inc    DWORD PTR [eax+0x3fc]
1003a64a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a64f:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]

1003a630:	0f 4e c6             	cmovle eax,esi
1003a633:	89 82 f8 03 00 00    	mov    DWORD PTR [edx+0x3f8],eax
1003a639:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a63e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a644:	ff 80 fc 03 00 00    	inc    DWORD PTR [eax+0x3fc]
1003a64a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a64f:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a655:	83 b9 fc 03 00 00 3b 	cmp    DWORD PTR [ecx+0x3fc],0x3b
1003a65c:	7e 35                	jle    0x1003a693
1003a65e:	ff 81 00 04 00 00    	inc    DWORD PTR [ecx+0x400]

1003a64a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a64f:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1003a655:	83 b9 fc 03 00 00 3b 	cmp    DWORD PTR [ecx+0x3fc],0x3b
1003a65c:	7e 35                	jle    0x1003a693
1003a65e:	ff 81 00 04 00 00    	inc    DWORD PTR [ecx+0x400]
1003a664:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a669:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a66f:	c7 80 f8 03 00 00 00 	mov    DWORD PTR [eax+0x3f8],0x0
1003a676:	00 00 00 
1003a679:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a65e:	ff 81 00 04 00 00    	inc    DWORD PTR [ecx+0x400]
1003a664:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a669:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a66f:	c7 80 f8 03 00 00 00 	mov    DWORD PTR [eax+0x3f8],0x0
1003a676:	00 00 00 
1003a679:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a67e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a684:	c7 80 fc 03 00 00 00 	mov    DWORD PTR [eax+0x3fc],0x0
1003a68b:	00 00 00 
1003a68e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1003a679:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a67e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a684:	c7 80 fc 03 00 00 00 	mov    DWORD PTR [eax+0x3fc],0x0
1003a68b:	00 00 00 
1003a68e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a693:	57                   	push   edi
1003a694:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003a69a:	33 db                	xor    ebx,ebx
1003a69c:	b8 89 88 88 88       	mov    eax,0x88888889
1003a6a1:	be 3c 00 00 00       	mov    esi,0x3c

1003a709:	0f 4c c7             	cmovl  eax,edi
1003a70c:	50                   	push   eax
1003a70d:	8d 45 bc             	lea    eax,[ebp-0x44]
1003a710:	50                   	push   eax
1003a711:	e8 ea 21 fd ff       	call   0x1000c900
1003a716:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a71b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a721:	8b 80 00 04 00 00    	mov    eax,DWORD PTR [eax+0x400]
1003a727:	83 f8 0a             	cmp    eax,0xa
1003a72a:	50                   	push   eax

1003a74a:	68 5c 5b 14 10       	push   0x10145b5c
1003a74f:	50                   	push   eax
1003a750:	e8 ab 21 fd ff       	call   0x1000c900
1003a755:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a75a:	8d 95 1c ff ff ff    	lea    edx,[ebp-0xe4]
1003a760:	52                   	push   edx
1003a761:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a767:	8b 80 a4 03 00 00    	mov    eax,DWORD PTR [eax+0x3a4]
1003a76d:	50                   	push   eax
1003a76e:	8b 08                	mov    ecx,DWORD PTR [eax]

1003a776:	83 c4 40             	add    esp,0x40
1003a779:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003a77f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a784:	d8 05 f0 cc 13 10    	fadd   DWORD PTR ds:0x1013ccf0
1003a78a:	51                   	push   ecx
1003a78b:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1003a792:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a798:	68 68 5b 14 10       	push   0x10145b68
1003a79d:	d9 9d 14 ff ff ff    	fstp   DWORD PTR [ebp-0xec]
1003a7a3:	f3 0f 10 85 14 ff ff 	movss  xmm0,DWORD PTR [ebp-0xec]

1003a7c3:	74 35                	je     0x1003a7fa
1003a7c5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a7ca:	33 db                	xor    ebx,ebx
1003a7cc:	be ec 02 00 00       	mov    esi,0x2ec
1003a7d1:	85 c0                	test   eax,eax
1003a7d3:	74 19                	je     0x1003a7ee
1003a7d5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a7db:	8b 0c 06             	mov    ecx,DWORD PTR [esi+eax*1]
1003a7de:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a7e0:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]

1003a802:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003a805:	33 cd                	xor    ecx,ebp
1003a807:	e8 b4 9a 07 00       	call   0x100b42c0
1003a80c:	8b e5                	mov    esp,ebp
1003a80e:	5d                   	pop    ebp
1003a80f:	c3                   	ret
1003a810:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a816:	8d 95 14 ff ff ff    	lea    edx,[ebp-0xec]
1003a81c:	52                   	push   edx
1003a81d:	8d 95 18 ff ff ff    	lea    edx,[ebp-0xe8]

1003a831:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a833:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003a836:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a83b:	6a 00                	push   0x0
1003a83d:	6a 00                	push   0x0
1003a83f:	68 80 00 00 00       	push   0x80
1003a844:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a84a:	6a 00                	push   0x0
1003a84c:	8b 8c 98 ec 02 00 00 	mov    ecx,DWORD PTR [eax+ebx*4+0x2ec]
1003a853:	8b 01                	mov    eax,DWORD PTR [ecx]

1003a84a:	6a 00                	push   0x0
1003a84c:	8b 8c 98 ec 02 00 00 	mov    ecx,DWORD PTR [eax+ebx*4+0x2ec]
1003a853:	8b 01                	mov    eax,DWORD PTR [ecx]
1003a855:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003a85b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a860:	6a 00                	push   0x0
1003a862:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a868:	8b 8c 98 ec 02 00 00 	mov    ecx,DWORD PTR [eax+ebx*4+0x2ec]
1003a86f:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003a874:	99                   	cdq

1003a88a:	56                   	push   esi
1003a88b:	ff 17                	call   DWORD PTR [edi]
1003a88d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a892:	6a 00                	push   0x0
1003a894:	68 80 00 00 00       	push   0x80
1003a899:	68 ff 00 00 00       	push   0xff
1003a89e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a8a4:	68 80 00 00 00       	push   0x80
1003a8a9:	8b 88 a4 03 00 00    	mov    ecx,DWORD PTR [eax+0x3a4]
1003a8af:	8b 01                	mov    eax,DWORD PTR [ecx]

1003a8c3:	68 88 5b 14 10       	push   0x10145b88
1003a8c8:	50                   	push   eax
1003a8c9:	e8 32 20 fd ff       	call   0x1000c900
1003a8ce:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a8d3:	8d 95 1c ff ff ff    	lea    edx,[ebp-0xe4]
1003a8d9:	52                   	push   edx
1003a8da:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a8e0:	8b 84 98 ec 02 00 00 	mov    eax,DWORD PTR [eax+ebx*4+0x2ec]
1003a8e7:	50                   	push   eax
1003a8e8:	8b 08                	mov    ecx,DWORD PTR [eax]

1003a8e0:	8b 84 98 ec 02 00 00 	mov    eax,DWORD PTR [eax+ebx*4+0x2ec]
1003a8e7:	50                   	push   eax
1003a8e8:	8b 08                	mov    ecx,DWORD PTR [eax]
1003a8ea:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003a8f0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a8f5:	83 c4 14             	add    esp,0x14
1003a8f8:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a8fe:	6a 01                	push   0x1
1003a900:	8b 8c 98 ec 02 00 00 	mov    ecx,DWORD PTR [eax+ebx*4+0x2ec]
1003a907:	8b 01                	mov    eax,DWORD PTR [ecx]

1003a93e:	33 c5                	xor    eax,ebp
1003a940:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1003a943:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a948:	53                   	push   ebx
1003a949:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
1003a94c:	57                   	push   edi
1003a94d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a953:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1003a956:	85 c0                	test   eax,eax
1003a958:	0f 84 20 03 00 00    	je     0x1003ac7e

1003a958:	0f 84 20 03 00 00    	je     0x1003ac7e
1003a95e:	c6 80 04 04 00 00 00 	mov    BYTE PTR [eax+0x404],0x0
1003a965:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a96a:	6a 00                	push   0x0
1003a96c:	6a 05                	push   0x5
1003a96e:	53                   	push   ebx
1003a96f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a975:	c6 80 04 05 00 00 00 	mov    BYTE PTR [eax+0x504],0x0
1003a97c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a981:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a96a:	6a 00                	push   0x0
1003a96c:	6a 05                	push   0x5
1003a96e:	53                   	push   ebx
1003a96f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a975:	c6 80 04 05 00 00 00 	mov    BYTE PTR [eax+0x504],0x0
1003a97c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a981:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a987:	c6 80 04 06 00 00 00 	mov    BYTE PTR [eax+0x604],0x0
1003a98e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a993:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a96f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a975:	c6 80 04 05 00 00 00 	mov    BYTE PTR [eax+0x504],0x0
1003a97c:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a981:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a987:	c6 80 04 06 00 00 00 	mov    BYTE PTR [eax+0x604],0x0
1003a98e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a993:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a999:	c6 80 04 07 00 00 00 	mov    BYTE PTR [eax+0x704],0x0
1003a9a0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a9a5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1003a981:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a987:	c6 80 04 06 00 00 00 	mov    BYTE PTR [eax+0x604],0x0
1003a98e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a993:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a999:	c6 80 04 07 00 00 00 	mov    BYTE PTR [eax+0x704],0x0
1003a9a0:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003a9a5:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003a9ab:	c6 80 04 08 00 00 00 	mov    BYTE PTR [eax+0x804],0x0
1003a9b2:	ff 15 44 27 1b 10    	call   DWORD PTR ds:0x101b2744
1003a9b8:	83 c4 0c             	add    esp,0xc

1003aa90:	ff 15 48 27 1b 10    	call   DWORD PTR ds:0x101b2748
1003aa96:	8b f0                	mov    esi,eax
1003aa98:	8d 85 fc fa ff ff    	lea    eax,[ebp-0x504]
1003aa9e:	68 00 01 00 00       	push   0x100
1003aaa3:	50                   	push   eax
1003aaa4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003aaa9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003aaaf:	05 04 04 00 00       	add    eax,0x404
1003aab4:	e9 fe 00 00 00       	jmp    0x1003abb7
1003aab9:	68 08 62 14 10       	push   0x10146208

1003aad3:	ff 15 48 27 1b 10    	call   DWORD PTR ds:0x101b2748
1003aad9:	8b f0                	mov    esi,eax
1003aadb:	8d 85 fc fa ff ff    	lea    eax,[ebp-0x504]
1003aae1:	68 00 01 00 00       	push   0x100
1003aae6:	50                   	push   eax
1003aae7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003aaec:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003aaf2:	05 04 05 00 00       	add    eax,0x504
1003aaf7:	e9 bb 00 00 00       	jmp    0x1003abb7
1003aafc:	68 10 62 14 10       	push   0x10146210

1003ab16:	ff 15 48 27 1b 10    	call   DWORD PTR ds:0x101b2748
1003ab1c:	8b f0                	mov    esi,eax
1003ab1e:	8d 85 fc fa ff ff    	lea    eax,[ebp-0x504]
1003ab24:	68 00 01 00 00       	push   0x100
1003ab29:	50                   	push   eax
1003ab2a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ab2f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003ab35:	05 04 06 00 00       	add    eax,0x604
1003ab3a:	eb 7b                	jmp    0x1003abb7
1003ab3c:	68 18 62 14 10       	push   0x10146218

1003ab56:	ff 15 48 27 1b 10    	call   DWORD PTR ds:0x101b2748
1003ab5c:	8b f0                	mov    esi,eax
1003ab5e:	8d 85 fc fa ff ff    	lea    eax,[ebp-0x504]
1003ab64:	68 00 01 00 00       	push   0x100
1003ab69:	50                   	push   eax
1003ab6a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ab6f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003ab75:	05 04 07 00 00       	add    eax,0x704
1003ab7a:	eb 3b                	jmp    0x1003abb7
1003ab7c:	68 24 62 14 10       	push   0x10146224

1003ab96:	ff 15 48 27 1b 10    	call   DWORD PTR ds:0x101b2748
1003ab9c:	8b f0                	mov    esi,eax
1003ab9e:	8d 85 fc fa ff ff    	lea    eax,[ebp-0x504]
1003aba4:	6a 40                	push   0x40
1003aba6:	50                   	push   eax
1003aba7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003abac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003abb2:	05 04 08 00 00       	add    eax,0x804
1003abb7:	50                   	push   eax
1003abb8:	e8 43 3c 0c 00       	call   0x100fe800

1003abff:	85 f6                	test   esi,esi
1003ac01:	0f 85 f9 fd ff ff    	jne    0x1003aa00
1003ac07:	56                   	push   esi
1003ac08:	ff 15 4c 27 1b 10    	call   DWORD PTR ds:0x101b274c
1003ac0e:	8b 35 00 26 1b 10    	mov    esi,DWORD PTR ds:0x101b2600
1003ac14:	83 c4 04             	add    esp,0x4
1003ac17:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003ac1d:	81 c1 04 04 00 00    	add    ecx,0x404
1003ac23:	8d 51 01             	lea    edx,[ecx+0x1]
1003ac26:	8a 01                	mov    al,BYTE PTR [ecx]

1003ac2f:	83 f9 02             	cmp    ecx,0x2
1003ac32:	0f 86 74 01 00 00    	jbe    0x1003adac
1003ac38:	32 db                	xor    bl,bl
1003ac3a:	33 d2                	xor    edx,edx
1003ac3c:	33 c9                	xor    ecx,ecx
1003ac3e:	66 90                	xchg   ax,ax
1003ac40:	8b 86 2c 14 00 00    	mov    eax,DWORD PTR [esi+0x142c]
1003ac46:	8a 84 08 04 04 00 00 	mov    al,BYTE PTR [eax+ecx*1+0x404]
1003ac4d:	84 db                	test   bl,bl
1003ac4f:	75 3d                	jne    0x1003ac8e

1003aca4:	0f 83 0d 04 00 00    	jae    0x1003b0b7
1003acaa:	c6 84 05 fc fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x104],0x0
1003acb1:	00 
1003acb2:	41                   	inc    ecx
1003acb3:	81 f9 00 01 00 00    	cmp    ecx,0x100
1003acb9:	7c 85                	jl     0x1003ac40
1003acbb:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003acc1:	8d 95 fc f9 ff ff    	lea    edx,[ebp-0x604]
1003acc7:	81 c1 04 04 00 00    	add    ecx,0x404
1003accd:	0f 1f 00             	nop    DWORD PTR [eax]

1003acda:	84 c0                	test   al,al
1003acdc:	75 f2                	jne    0x1003acd0
1003acde:	84 db                	test   bl,bl
1003ace0:	0f 84 c0 00 00 00    	je     0x1003ada6
1003ace6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003aceb:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003acf0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003acf6:	05 04 08 00 00       	add    eax,0x804
1003acfb:	50                   	push   eax
1003acfc:	e8 0f 1e 03 00       	call   0x1006cb10

1003acf6:	05 04 08 00 00       	add    eax,0x804
1003acfb:	50                   	push   eax
1003acfc:	e8 0f 1e 03 00       	call   0x1006cb10
1003ad01:	85 c0                	test   eax,eax
1003ad03:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ad08:	74 26                	je     0x1003ad30
1003ad0a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003ad10:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003ad15:	05 04 08 00 00       	add    eax,0x804
1003ad1a:	50                   	push   eax

1003ad10:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003ad15:	05 04 08 00 00       	add    eax,0x804
1003ad1a:	50                   	push   eax
1003ad1b:	e8 f0 1d 03 00       	call   0x1006cb10
1003ad20:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003ad26:	8b d0                	mov    edx,eax
1003ad28:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003ad2e:	eb 0c                	jmp    0x1003ad3c
1003ad30:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003ad36:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]

1003ad1a:	50                   	push   eax
1003ad1b:	e8 f0 1d 03 00       	call   0x1006cb10
1003ad20:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003ad26:	8b d0                	mov    edx,eax
1003ad28:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003ad2e:	eb 0c                	jmp    0x1003ad3c
1003ad30:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003ad36:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]
1003ad3c:	8b f2                	mov    esi,edx
1003ad3e:	66 90                	xchg   ax,ax

1003ad70:	8a 02                	mov    al,BYTE PTR [edx]
1003ad72:	42                   	inc    edx
1003ad73:	84 c0                	test   al,al
1003ad75:	75 f9                	jne    0x1003ad70
1003ad77:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ad7c:	2b d6                	sub    edx,esi
1003ad7e:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003ad84:	81 c7 03 04 00 00    	add    edi,0x403
1003ad8a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1003ad90:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]

1003ad9a:	c1 e9 02             	shr    ecx,0x2
1003ad9d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1003ad9f:	8b ca                	mov    ecx,edx
1003ada1:	83 e1 03             	and    ecx,0x3
1003ada4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1003ada6:	8b 35 00 26 1b 10    	mov    esi,DWORD PTR ds:0x101b2600
1003adac:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003adb2:	81 c1 04 05 00 00    	add    ecx,0x504
1003adb8:	8d 51 01             	lea    edx,[ecx+0x1]
1003adbb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]

1003adcc:	0f 86 5a 01 00 00    	jbe    0x1003af2c
1003add2:	32 db                	xor    bl,bl
1003add4:	33 d2                	xor    edx,edx
1003add6:	33 c9                	xor    ecx,ecx
1003add8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1003addf:	00 
1003ade0:	8b 86 2c 14 00 00    	mov    eax,DWORD PTR [esi+0x142c]
1003ade6:	8a 84 08 04 05 00 00 	mov    al,BYTE PTR [eax+ecx*1+0x504]
1003aded:	84 db                	test   bl,bl
1003adef:	75 1d                	jne    0x1003ae0e

1003ae24:	0f 83 8d 02 00 00    	jae    0x1003b0b7
1003ae2a:	c6 84 05 fc fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x104],0x0
1003ae31:	00 
1003ae32:	41                   	inc    ecx
1003ae33:	81 f9 00 01 00 00    	cmp    ecx,0x100
1003ae39:	7c a5                	jl     0x1003ade0
1003ae3b:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003ae41:	8d 95 fc f8 ff ff    	lea    edx,[ebp-0x704]
1003ae47:	81 c1 04 05 00 00    	add    ecx,0x504
1003ae4d:	0f 1f 00             	nop    DWORD PTR [eax]

1003ae5a:	84 c0                	test   al,al
1003ae5c:	75 f2                	jne    0x1003ae50
1003ae5e:	84 db                	test   bl,bl
1003ae60:	0f 84 c0 00 00 00    	je     0x1003af26
1003ae66:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ae6b:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003ae70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003ae76:	05 04 08 00 00       	add    eax,0x804
1003ae7b:	50                   	push   eax
1003ae7c:	e8 8f 1c 03 00       	call   0x1006cb10

1003ae76:	05 04 08 00 00       	add    eax,0x804
1003ae7b:	50                   	push   eax
1003ae7c:	e8 8f 1c 03 00       	call   0x1006cb10
1003ae81:	85 c0                	test   eax,eax
1003ae83:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003ae88:	74 26                	je     0x1003aeb0
1003ae8a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003ae90:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003ae95:	05 04 08 00 00       	add    eax,0x804
1003ae9a:	50                   	push   eax

1003ae90:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003ae95:	05 04 08 00 00       	add    eax,0x804
1003ae9a:	50                   	push   eax
1003ae9b:	e8 70 1c 03 00       	call   0x1006cb10
1003aea0:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003aea6:	8b d0                	mov    edx,eax
1003aea8:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003aeae:	eb 0c                	jmp    0x1003aebc
1003aeb0:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003aeb6:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]

1003ae9a:	50                   	push   eax
1003ae9b:	e8 70 1c 03 00       	call   0x1006cb10
1003aea0:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003aea6:	8b d0                	mov    edx,eax
1003aea8:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003aeae:	eb 0c                	jmp    0x1003aebc
1003aeb0:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003aeb6:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]
1003aebc:	8b f2                	mov    esi,edx
1003aebe:	66 90                	xchg   ax,ax

1003aef0:	8a 02                	mov    al,BYTE PTR [edx]
1003aef2:	42                   	inc    edx
1003aef3:	84 c0                	test   al,al
1003aef5:	75 f9                	jne    0x1003aef0
1003aef7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003aefc:	2b d6                	sub    edx,esi
1003aefe:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003af04:	81 c7 03 05 00 00    	add    edi,0x503
1003af0a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1003af10:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]

1003af1a:	c1 e9 02             	shr    ecx,0x2
1003af1d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1003af1f:	8b ca                	mov    ecx,edx
1003af21:	83 e1 03             	and    ecx,0x3
1003af24:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1003af26:	8b 35 00 26 1b 10    	mov    esi,DWORD PTR ds:0x101b2600
1003af2c:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003af32:	81 c1 04 06 00 00    	add    ecx,0x604
1003af38:	8d 51 01             	lea    edx,[ecx+0x1]
1003af3b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]

1003af4c:	0f 86 2b fd ff ff    	jbe    0x1003ac7d
1003af52:	32 db                	xor    bl,bl
1003af54:	33 d2                	xor    edx,edx
1003af56:	33 c9                	xor    ecx,ecx
1003af58:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1003af5f:	00 
1003af60:	8b 86 2c 14 00 00    	mov    eax,DWORD PTR [esi+0x142c]
1003af66:	8a 84 08 04 06 00 00 	mov    al,BYTE PTR [eax+ecx*1+0x604]
1003af6d:	84 db                	test   bl,bl
1003af6f:	75 1d                	jne    0x1003af8e

1003afa4:	0f 83 0d 01 00 00    	jae    0x1003b0b7
1003afaa:	c6 84 05 fc fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x104],0x0
1003afb1:	00 
1003afb2:	41                   	inc    ecx
1003afb3:	81 f9 00 01 00 00    	cmp    ecx,0x100
1003afb9:	7c a5                	jl     0x1003af60
1003afbb:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
1003afc1:	8d 95 fc f7 ff ff    	lea    edx,[ebp-0x804]
1003afc7:	81 c1 04 06 00 00    	add    ecx,0x604
1003afcd:	0f 1f 00             	nop    DWORD PTR [eax]

1003afda:	84 c0                	test   al,al
1003afdc:	75 f2                	jne    0x1003afd0
1003afde:	84 db                	test   bl,bl
1003afe0:	0f 84 97 fc ff ff    	je     0x1003ac7d
1003afe6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003afeb:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003aff0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003aff6:	05 04 08 00 00       	add    eax,0x804
1003affb:	50                   	push   eax
1003affc:	e8 0f 1b 03 00       	call   0x1006cb10

1003aff6:	05 04 08 00 00       	add    eax,0x804
1003affb:	50                   	push   eax
1003affc:	e8 0f 1b 03 00       	call   0x1006cb10
1003b001:	85 c0                	test   eax,eax
1003b003:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003b008:	74 26                	je     0x1003b030
1003b00a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003b010:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003b015:	05 04 08 00 00       	add    eax,0x804
1003b01a:	50                   	push   eax

1003b010:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003b015:	05 04 08 00 00       	add    eax,0x804
1003b01a:	50                   	push   eax
1003b01b:	e8 f0 1a 03 00       	call   0x1006cb10
1003b020:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003b026:	8b d0                	mov    edx,eax
1003b028:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003b02e:	eb 0c                	jmp    0x1003b03c
1003b030:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003b036:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]

1003b01a:	50                   	push   eax
1003b01b:	e8 f0 1a 03 00       	call   0x1006cb10
1003b020:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003b026:	8b d0                	mov    edx,eax
1003b028:	8b b9 2c 14 00 00    	mov    edi,DWORD PTR [ecx+0x142c]
1003b02e:	eb 0c                	jmp    0x1003b03c
1003b030:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003b036:	8d 97 04 07 00 00    	lea    edx,[edi+0x704]
1003b03c:	8b f2                	mov    esi,edx
1003b03e:	66 90                	xchg   ax,ax

1003b070:	8a 02                	mov    al,BYTE PTR [edx]
1003b072:	42                   	inc    edx
1003b073:	84 c0                	test   al,al
1003b075:	75 f9                	jne    0x1003b070
1003b077:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003b07c:	2b d6                	sub    edx,esi
1003b07e:	8b b8 2c 14 00 00    	mov    edi,DWORD PTR [eax+0x142c]
1003b084:	81 c7 03 06 00 00    	add    edi,0x603
1003b08a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1003b090:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]

1003e213:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003e218:	83 ec 20             	sub    esp,0x20
1003e21b:	56                   	push   esi
1003e21c:	8b f1                	mov    esi,ecx
1003e21e:	85 c0                	test   eax,eax
1003e220:	0f 84 05 01 00 00    	je     0x1003e32b
1003e226:	8b 90 2c 14 00 00    	mov    edx,DWORD PTR [eax+0x142c]
1003e22c:	85 d2                	test   edx,edx
1003e22e:	0f 84 f7 00 00 00    	je     0x1003e32b
1003e234:	80 ba d4 00 00 00 00 	cmp    BYTE PTR [edx+0xd4],0x0

1003e273:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003e276:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003e27b:	8d 55 fc             	lea    edx,[ebp-0x4]
1003e27e:	52                   	push   edx
1003e27f:	8d 55 f8             	lea    edx,[ebp-0x8]
1003e282:	52                   	push   edx
1003e283:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003e289:	8b 88 a8 03 00 00    	mov    ecx,DWORD PTR [eax+0x3a8]
1003e28f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003e291:	ff 50 0c             	call   DWORD PTR [eax+0xc]

1003e291:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003e294:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003e299:	8d 55 ec             	lea    edx,[ebp-0x14]
1003e29c:	52                   	push   edx
1003e29d:	8d 55 e8             	lea    edx,[ebp-0x18]
1003e2a0:	52                   	push   edx
1003e2a1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003e2a7:	8d 55 e4             	lea    edx,[ebp-0x1c]
1003e2aa:	52                   	push   edx
1003e2ab:	8d 55 e0             	lea    edx,[ebp-0x20]

1003e2c3:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1003e2c6:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
1003e2c9:	8b 01                	mov    eax,DWORD PTR [ecx]
1003e2cb:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003e2ce:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1003e2d3:	8b 8e c8 00 00 00    	mov    ecx,DWORD PTR [esi+0xc8]
1003e2d9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1003e2df:	8b 11                	mov    edx,DWORD PTR [ecx]
1003e2e1:	05 d4 00 00 00       	add    eax,0xd4
1003e2e6:	50                   	push   eax

10044ffc:	0f 86 ed 00 00 00    	jbe    0x100450ef
10045002:	68 ec d3 18 10       	push   0x1018d3ec
10045007:	68 ec d2 18 10       	push   0x1018d2ec
1004500c:	e8 1f 59 ff ff       	call   0x1003a930
10045011:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10045016:	83 c4 08             	add    esp,0x8
10045019:	8b 90 2c 14 00 00    	mov    edx,DWORD PTR [eax+0x142c]
1004501f:	89 95 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],edx
10045025:	81 c2 04 04 00 00    	add    edx,0x404
1004502b:	8b ca                	mov    ecx,edx

1004506e:	3c 40                	cmp    al,0x40
10045070:	0f b6 c8             	movzx  ecx,al
10045073:	0f 44 ca             	cmove  ecx,edx
10045076:	88 8c 3d fc fe ff ff 	mov    BYTE PTR [ebp+edi*1-0x104],cl
1004507d:	47                   	inc    edi
1004507e:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10045083:	8b b0 2c 14 00 00    	mov    esi,DWORD PTR [eax+0x142c]
10045089:	8d 8e 04 04 00 00    	lea    ecx,[esi+0x404]
1004508f:	8d 51 01             	lea    edx,[ecx+0x1]
10045092:	8a 01                	mov    al,BYTE PTR [ecx]

1004b8fa:	85 c0                	test   eax,eax
1004b8fc:	0f 84 25 01 00 00    	je     0x1004ba27
1004b902:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1004b908:	85 c9                	test   ecx,ecx
1004b90a:	0f 84 17 01 00 00    	je     0x1004ba27
1004b910:	56                   	push   esi
1004b911:	8b b1 2c 14 00 00    	mov    esi,DWORD PTR [ecx+0x142c]
1004b917:	85 f6                	test   esi,esi
1004b919:	0f 84 f2 00 00 00    	je     0x1004ba11
1004b91f:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]

1004b979:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
1004b97f:	52                   	push   edx
1004b980:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1004b983:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1004b988:	ff b5 74 ff ff ff    	push   DWORD PTR [ebp-0x8c]
1004b98e:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
1004b994:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b99a:	8b 88 e0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e0]
1004b9a0:	8b 01                	mov    eax,DWORD PTR [ecx]
1004b9a2:	ff 50 08             	call   DWORD PTR [eax+0x8]

1004b994:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b99a:	8b 88 e0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e0]
1004b9a0:	8b 01                	mov    eax,DWORD PTR [ecx]
1004b9a2:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004b9a5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1004b9aa:	6a 00                	push   0x0
1004b9ac:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b9b2:	8b 88 e0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3e0]
1004b9b8:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1004b9bd:	2b 85 78 ff ff ff    	sub    eax,DWORD PTR [ebp-0x88]

1004b9cb:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1004b9d1:	50                   	push   eax
1004b9d2:	ff 15 80 26 1b 10    	call   DWORD PTR ds:0x101b2680
1004b9d8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1004b9dd:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
1004b9e3:	52                   	push   edx
1004b9e4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b9ea:	c7 80 ec 03 00 00 00 	mov    DWORD PTR [eax+0x3ec],0x0
1004b9f1:	00 00 00 
1004b9f4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1004b9dd:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
1004b9e3:	52                   	push   edx
1004b9e4:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b9ea:	c7 80 ec 03 00 00 00 	mov    DWORD PTR [eax+0x3ec],0x0
1004b9f1:	00 00 00 
1004b9f4:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1004b9f9:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1004b9ff:	8b 80 e0 03 00 00    	mov    eax,DWORD PTR [eax+0x3e0]
1004ba05:	50                   	push   eax
1004ba06:	8b 08                	mov    ecx,DWORD PTR [eax]

1006be80:	d8 45 0c             	fadd   DWORD PTR [ebp+0xc]
1006be83:	89 b4 b8 38 02 00 00 	mov    DWORD PTR [eax+edi*4+0x238],esi
1006be8a:	d9 9c b8 34 01 00 00 	fstp   DWORD PTR [eax+edi*4+0x134]
1006be91:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1006be96:	85 c0                	test   eax,eax
1006be98:	74 5b                	je     0x1006bef5
1006be9a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1006bea0:	85 c0                	test   eax,eax
1006bea2:	74 51                	je     0x1006bef5
1006bea4:	83 fb 03             	cmp    ebx,0x3

1006becb:	8b 84 b8 74 0f 00 00 	mov    eax,DWORD PTR [eax+edi*4+0xf74]
1006bed2:	8b 30                	mov    esi,DWORD PTR [eax]
1006bed4:	e8 67 c7 f9 ff       	call   0x10008640
1006bed9:	83 c4 04             	add    esp,0x4
1006bedc:	50                   	push   eax
1006bedd:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1006bee2:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1006bee8:	8b 8c b9 74 0f 00 00 	mov    ecx,DWORD PTR [ecx+edi*4+0xf74]
1006beef:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
1006bef5:	5f                   	pop    edi

100702cf:	50                   	push   eax
100702d0:	e8 2b c6 f9 ff       	call   0x1000c900
100702d5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100702da:	83 c4 0c             	add    esp,0xc
100702dd:	85 c0                	test   eax,eax
100702df:	0f 84 e2 00 00 00    	je     0x100703c7
100702e5:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
100702ec:	0f 84 d5 00 00 00    	je     0x100703c7
100702f2:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100702f8:	83 bd ec fe ff ff 00 	cmp    DWORD PTR [ebp-0x114],0x0

100702e5:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
100702ec:	0f 84 d5 00 00 00    	je     0x100703c7
100702f2:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100702f8:	83 bd ec fe ff ff 00 	cmp    DWORD PTR [ebp-0x114],0x0
100702ff:	d8 05 00 ef 13 10    	fadd   DWORD PTR ds:0x1013ef00
10070305:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007030a:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070310:	d9 9d f4 fe ff ff    	fstp   DWORD PTR [ebp-0x10c]
10070316:	f3 0f 2c 8d f4 fe ff 	cvttss2si ecx,DWORD PTR [ebp-0x10c]
1007031d:	ff 

10070316:	f3 0f 2c 8d f4 fe ff 	cvttss2si ecx,DWORD PTR [ebp-0x10c]
1007031d:	ff 
1007031e:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10070324:	0f 85 9d 00 00 00    	jne    0x100703c7
1007032a:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007032f:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10070335:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
1007033b:	81 c1 d4 00 00 00    	add    ecx,0xd4
10070341:	8a 02                	mov    al,BYTE PTR [edx]
10070343:	8d 52 01             	lea    edx,[edx+0x1]

10070343:	8d 52 01             	lea    edx,[edx+0x1]
10070346:	88 01                	mov    BYTE PTR [ecx],al
10070348:	8d 49 01             	lea    ecx,[ecx+0x1]
1007034b:	84 c0                	test   al,al
1007034d:	75 f2                	jne    0x10070341
1007034f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070354:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007035a:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
10070361:	00 7f 43 
10070364:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

1007034d:	75 f2                	jne    0x10070341
1007034f:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070354:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007035a:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
10070361:	00 7f 43 
10070364:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070369:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007036f:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10070376:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007037b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

1007035a:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
10070361:	00 7f 43 
10070364:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070369:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007036f:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10070376:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007037b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070381:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10070388:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007038d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10070369:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007036f:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
10070376:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007037b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070381:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10070388:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007038d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070393:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
1007039a:	00 00 00 
1007039d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

10070381:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
10070388:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007038d:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070393:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
1007039a:	00 00 00 
1007039d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100703a2:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100703a8:	c7 80 bc 00 00 00 05 	mov    DWORD PTR [eax+0xbc],0x5
100703af:	00 00 00 
100703b2:	eb 13                	jmp    0x100703c7

10070cf4:	57                   	push   edi
10070cf5:	68 ec d3 18 10       	push   0x1018d3ec
10070cfa:	68 ec d2 18 10       	push   0x1018d2ec
10070cff:	e8 2c 9c fc ff       	call   0x1003a930
10070d04:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070d09:	83 c4 08             	add    esp,0x8
10070d0c:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070d12:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10070d19:	00 00 00 
10070d1c:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600

10070d09:	83 c4 08             	add    esp,0x8
10070d0c:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070d12:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10070d19:	00 00 00 
10070d1c:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600
10070d22:	89 9d f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],ebx
10070d28:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
10070d2e:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
10070d34:	8b d1                	mov    edx,ecx
10070d36:	8d 72 01             	lea    esi,[edx+0x1]

10070d78:	3c 40                	cmp    al,0x40
10070d7a:	0f b6 c8             	movzx  ecx,al
10070d7d:	b8 20 00 00 00       	mov    eax,0x20
10070d82:	0f 44 c8             	cmove  ecx,eax
10070d85:	88 8c 15 fc fe ff ff 	mov    BYTE PTR [ebp+edx*1-0x104],cl
10070d8c:	42                   	inc    edx
10070d8d:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
10070d93:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
10070d99:	8d 59 01             	lea    ebx,[ecx+0x1]
10070d9c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]

10070db1:	72 bd                	jb     0x10070d70
10070db3:	81 fe 00 01 00 00    	cmp    esi,0x100
10070db9:	0f 83 e2 00 00 00    	jae    0x10070ea1
10070dbf:	c6 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],0x0
10070dc6:	00 
10070dc7:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10070dcd:	8b 83 2c 14 00 00    	mov    eax,DWORD PTR [ebx+0x142c]
10070dd3:	52                   	push   edx
10070dd4:	8b 80 b0 03 00 00    	mov    eax,DWORD PTR [eax+0x3b0]
10070dda:	50                   	push   eax

10070dda:	50                   	push   eax
10070ddb:	8b 08                	mov    ecx,DWORD PTR [eax]
10070ddd:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10070de3:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070de8:	8d b5 f4 fe ff ff    	lea    esi,[ebp-0x10c]
10070dee:	83 c4 08             	add    esp,0x8
10070df1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070df7:	56                   	push   esi
10070df8:	8d b5 f0 fe ff ff    	lea    esi,[ebp-0x110]
10070dfe:	56                   	push   esi

10070e05:	05 04 04 00 00       	add    eax,0x404
10070e0a:	50                   	push   eax
10070e0b:	8b 11                	mov    edx,DWORD PTR [ecx]
10070e0d:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10070e10:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e15:	6a d0                	push   0xffffffd0
10070e17:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e1d:	8b 88 b0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3b0]
10070e23:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
10070e28:	99                   	cdq

10070e2b:	8b 31                	mov    esi,DWORD PTR [ecx]
10070e2d:	d1 f8                	sar    eax,1
10070e2f:	2d 90 01 00 00       	sub    eax,0x190
10070e34:	50                   	push   eax
10070e35:	ff 16                	call   DWORD PTR [esi]
10070e37:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e3c:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e42:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
10070e49:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e4e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10070e34:	50                   	push   eax
10070e35:	ff 16                	call   DWORD PTR [esi]
10070e37:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e3c:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e42:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
10070e49:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e4e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e54:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
10070e5b:	00 00 00 
10070e5e:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0

10070e4e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e54:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
10070e5b:	00 00 00 
10070e5e:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10070e64:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10070e69:	d8 05 30 f5 13 10    	fadd   DWORD PTR ds:0x1013f530
10070e6f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10070e75:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
10070e7b:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
10070e82:	ff 

1007138b:	50                   	push   eax
1007138c:	e8 6f d4 08 00       	call   0x100fe800
10071391:	83 c4 0c             	add    esp,0xc
10071394:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071399:	85 c0                	test   eax,eax
1007139b:	0f 84 83 00 00 00    	je     0x10071424
100713a1:	8b 90 2c 14 00 00    	mov    edx,DWORD PTR [eax+0x142c]
100713a7:	85 d2                	test   edx,edx
100713a9:	74 79                	je     0x10071424
100713ab:	8d 8d 7c fe ff ff    	lea    ecx,[ebp-0x184]

100713b9:	8d 49 01             	lea    ecx,[ecx+0x1]
100713bc:	88 02                	mov    BYTE PTR [edx],al
100713be:	8d 52 01             	lea    edx,[edx+0x1]
100713c1:	84 c0                	test   al,al
100713c3:	75 f2                	jne    0x100713b7
100713c5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713ca:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713d0:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100713d7:	00 7f 43 
100713da:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100713c3:	75 f2                	jne    0x100713b7
100713c5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713ca:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713d0:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100713d7:	00 7f 43 
100713da:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713e5:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
100713ec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713f1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100713d0:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100713d7:	00 7f 43 
100713da:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713e5:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
100713ec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713f1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713f7:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
100713fe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071403:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

100713df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713e5:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
100713ec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713f1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713f7:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
100713fe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071403:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10071409:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
10071410:	00 00 00 
10071413:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600

100713f7:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
100713fe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071403:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10071409:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
10071410:	00 00 00 
10071413:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071418:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007141e:	89 b0 bc 00 00 00    	mov    DWORD PTR [eax+0xbc],esi
10071424:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10071427:	b8 01 00 00 00       	mov    eax,0x1

10071a4a:	89 81 b4 31 00 00    	mov    DWORD PTR [ecx+0x31b4],eax
10071a50:	e8 5b ee 00 00       	call   0x100808b0
10071a55:	8b f0                	mov    esi,eax
10071a57:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071a5c:	85 c0                	test   eax,eax
10071a5e:	74 79                	je     0x10071ad9
10071a60:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10071a66:	85 c9                	test   ecx,ecx
10071a68:	74 6f                	je     0x10071ad9
10071a6a:	83 3d 74 d2 18 10 00 	cmp    DWORD PTR ds:0x1018d274,0x0

10071a71:	75 15                	jne    0x10071a88
10071a73:	6a 00                	push   0x0
10071a75:	e8 56 a1 fc ff       	call   0x1003bbd0
10071a7a:	83 3d 74 d2 18 10 00 	cmp    DWORD PTR ds:0x1018d274,0x0
10071a81:	74 56                	je     0x10071ad9
10071a83:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071a88:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10071a8e:	85 f6                	test   esi,esi
10071a90:	8b 80 f0 0f 00 00    	mov    eax,DWORD PTR [eax+0xff0]
10071a96:	8b 30                	mov    esi,DWORD PTR [eax]

10071a9f:	eb 05                	jmp    0x10071aa6
10071aa1:	68 64 63 14 10       	push   0x10146364
10071aa6:	e8 95 6b f9 ff       	call   0x10008640
10071aab:	83 c4 04             	add    esp,0x4
10071aae:	50                   	push   eax
10071aaf:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071ab4:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10071aba:	8b 89 f0 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xff0]
10071ac0:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10071ac6:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600

10071aaf:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071ab4:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10071aba:	8b 89 f0 0f 00 00    	mov    ecx,DWORD PTR [ecx+0xff0]
10071ac0:	ff 96 fc 01 00 00    	call   DWORD PTR [esi+0x1fc]
10071ac6:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10071acc:	6a 01                	push   0x1
10071ace:	8b 89 2c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x142c]
10071ad4:	e8 f7 a0 fc ff       	call   0x1003bbd0
10071ad9:	b8 01 00 00 00       	mov    eax,0x1
10071ade:	5e                   	pop    esi

10072d11:	50                   	push   eax
10072d12:	e8 e9 9b f9 ff       	call   0x1000c900
10072d17:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072d1c:	83 c4 14             	add    esp,0x14
10072d1f:	85 c0                	test   eax,eax
10072d21:	0f 84 77 01 00 00    	je     0x10072e9e
10072d27:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10072d2e:	0f 84 6a 01 00 00    	je     0x10072e9e
10072d34:	8d 8d 5c ff ff ff    	lea    ecx,[ebp-0xa4]
10072d3a:	8d 51 01             	lea    edx,[ecx+0x1]

10072d70:	d8 05 00 ef 13 10    	fadd   DWORD PTR ds:0x1013ef00
10072d76:	d9 9d 58 ff ff ff    	fstp   DWORD PTR [ebp-0xa8]
10072d7c:	f3 0f 2c 8d 58 ff ff 	cvttss2si ecx,DWORD PTR [ebp-0xa8]
10072d83:	ff 
10072d84:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072d89:	8d 95 5c ff ff ff    	lea    edx,[ebp-0xa4]
10072d8f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072d95:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072d9b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072da0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10072d83:	ff 
10072d84:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072d89:	8d 95 5c ff ff ff    	lea    edx,[ebp-0xa4]
10072d8f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072d95:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072d9b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072da0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072da6:	c6 80 d5 01 00 00 00 	mov    BYTE PTR [eax+0x1d5],0x0
10072dad:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072db2:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]

10072d8f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072d95:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072d9b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072da0:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072da6:	c6 80 d5 01 00 00 00 	mov    BYTE PTR [eax+0x1d5],0x0
10072dad:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072db2:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10072db8:	81 c1 d4 00 00 00    	add    ecx,0xd4
10072dbe:	66 90                	xchg   ax,ax
10072dc0:	8a 02                	mov    al,BYTE PTR [edx]

10072de1:	50                   	push   eax
10072de2:	e8 19 9b f9 ff       	call   0x1000c900
10072de7:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072dec:	83 c4 14             	add    esp,0x14
10072def:	85 c0                	test   eax,eax
10072df1:	0f 84 a7 00 00 00    	je     0x10072e9e
10072df7:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
10072dfe:	0f 84 9a 00 00 00    	je     0x10072e9e
10072e04:	8d 8d 5c ff ff ff    	lea    ecx,[ebp-0xa4]
10072e0a:	8d 51 01             	lea    edx,[ecx+0x1]

10072e40:	d8 05 00 ef 13 10    	fadd   DWORD PTR ds:0x1013ef00
10072e46:	d9 9d 58 ff ff ff    	fstp   DWORD PTR [ebp-0xa8]
10072e4c:	f3 0f 2c 8d 58 ff ff 	cvttss2si ecx,DWORD PTR [ebp-0xa8]
10072e53:	ff 
10072e54:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e59:	8d 95 5c ff ff ff    	lea    edx,[ebp-0xa4]
10072e5f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072e65:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072e6b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10072e53:	ff 
10072e54:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e59:	8d 95 5c ff ff ff    	lea    edx,[ebp-0xa4]
10072e5f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072e65:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072e6b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072e76:	c6 80 d5 01 00 00 00 	mov    BYTE PTR [eax+0x1d5],0x0
10072e7d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e82:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]

10072e5f:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072e65:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
10072e6b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e70:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10072e76:	c6 80 d5 01 00 00 00 	mov    BYTE PTR [eax+0x1d5],0x0
10072e7d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10072e82:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10072e88:	81 c1 d4 00 00 00    	add    ecx,0xd4
10072e8e:	66 90                	xchg   ax,ax
10072e90:	8a 02                	mov    al,BYTE PTR [edx]

10078b14:	8b e5                	mov    esp,ebp
10078b16:	5d                   	pop    ebp
10078b17:	c3                   	ret
10078b18:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10078b1d:	85 c0                	test   eax,eax
10078b1f:	0f 84 9e 00 00 00    	je     0x10078bc3
10078b25:	8b 88 2c 14 00 00    	mov    ecx,DWORD PTR [eax+0x142c]
10078b2b:	85 c9                	test   ecx,ecx
10078b2d:	74 25                	je     0x10078b54
10078b2f:	80 b9 9c 03 00 00 00 	cmp    BYTE PTR [ecx+0x39c],0x0

10079643:	57                   	push   edi
10079644:	68 ec d3 18 10       	push   0x1018d3ec
10079649:	68 ec d2 18 10       	push   0x1018d2ec
1007964e:	e8 dd 12 fc ff       	call   0x1003a930
10079653:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10079658:	83 c4 08             	add    esp,0x8
1007965b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079661:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10079668:	00 00 00 
1007966b:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600

10079658:	83 c4 08             	add    esp,0x8
1007965b:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079661:	c7 80 44 08 00 00 01 	mov    DWORD PTR [eax+0x844],0x1
10079668:	00 00 00 
1007966b:	8b 1d 00 26 1b 10    	mov    ebx,DWORD PTR ds:0x101b2600
10079671:	89 9d f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],ebx
10079677:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
1007967d:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
10079683:	8b d1                	mov    edx,ecx
10079685:	8d 72 01             	lea    esi,[edx+0x1]

100796be:	3c 40                	cmp    al,0x40
100796c0:	0f b6 c8             	movzx  ecx,al
100796c3:	b8 20 00 00 00       	mov    eax,0x20
100796c8:	0f 44 c8             	cmove  ecx,eax
100796cb:	88 8c 15 fc fe ff ff 	mov    BYTE PTR [ebp+edx*1-0x104],cl
100796d2:	42                   	inc    edx
100796d3:	8b bb 2c 14 00 00    	mov    edi,DWORD PTR [ebx+0x142c]
100796d9:	8d 8f 04 04 00 00    	lea    ecx,[edi+0x404]
100796df:	8d 59 01             	lea    ebx,[ecx+0x1]
100796e2:	8a 01                	mov    al,BYTE PTR [ecx]

100796f3:	72 c1                	jb     0x100796b6
100796f5:	81 fe 00 01 00 00    	cmp    esi,0x100
100796fb:	0f 83 dd 00 00 00    	jae    0x100797de
10079701:	c6 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],0x0
10079708:	00 
10079709:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
1007970f:	8b 83 2c 14 00 00    	mov    eax,DWORD PTR [ebx+0x142c]
10079715:	52                   	push   edx
10079716:	8b 80 b0 03 00 00    	mov    eax,DWORD PTR [eax+0x3b0]
1007971c:	50                   	push   eax

1007971c:	50                   	push   eax
1007971d:	8b 08                	mov    ecx,DWORD PTR [eax]
1007971f:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10079725:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007972a:	8d b5 f4 fe ff ff    	lea    esi,[ebp-0x10c]
10079730:	83 c4 08             	add    esp,0x8
10079733:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079739:	56                   	push   esi
1007973a:	8d b5 f0 fe ff ff    	lea    esi,[ebp-0x110]
10079740:	56                   	push   esi

10079747:	05 04 04 00 00       	add    eax,0x404
1007974c:	50                   	push   eax
1007974d:	8b 11                	mov    edx,DWORD PTR [ecx]
1007974f:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10079752:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10079757:	6a d0                	push   0xffffffd0
10079759:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007975f:	8b 88 b0 03 00 00    	mov    ecx,DWORD PTR [eax+0x3b0]
10079765:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1007976a:	99                   	cdq

1007976d:	8b 31                	mov    esi,DWORD PTR [ecx]
1007976f:	d1 f8                	sar    eax,1
10079771:	2d 90 01 00 00       	sub    eax,0x190
10079776:	50                   	push   eax
10079777:	ff 16                	call   DWORD PTR [esi]
10079779:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007977e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079784:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
1007978b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10079790:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]

10079776:	50                   	push   eax
10079777:	ff 16                	call   DWORD PTR [esi]
10079779:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1007977e:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079784:	c6 80 48 08 00 00 01 	mov    BYTE PTR [eax+0x848],0x1
1007978b:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10079790:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079796:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
1007979d:	00 00 00 
100797a0:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0

10079790:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10079796:	c7 80 4c 08 00 00 ff 	mov    DWORD PTR [eax+0x84c],0xff
1007979d:	00 00 00 
100797a0:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100797a6:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100797ab:	d8 05 30 f5 13 10    	fadd   DWORD PTR ds:0x1013f530
100797b1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100797b7:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
100797bd:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
100797c4:	ff 

1008a533:	83 c7 04             	add    edi,0x4
1008a536:	81 fe 28 56 54 10    	cmp    esi,0x10545628
1008a53c:	0f 8c 66 ff ff ff    	jl     0x1008a4a8
1008a542:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
1008a547:	85 c0                	test   eax,eax
1008a549:	74 43                	je     0x1008a58e
1008a54b:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1008a552:	74 3a                	je     0x1008a58e
1008a554:	bf 29 51 54 10       	mov    edi,0x10545129
1008a559:	be b4 03 00 00       	mov    esi,0x3b4

1008a549:	74 43                	je     0x1008a58e
1008a54b:	83 b8 2c 14 00 00 00 	cmp    DWORD PTR [eax+0x142c],0x0
1008a552:	74 3a                	je     0x1008a58e
1008a554:	bf 29 51 54 10       	mov    edi,0x10545129
1008a559:	be b4 03 00 00       	mov    esi,0x3b4
1008a55e:	66 90                	xchg   ax,ax
1008a560:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1008a566:	57                   	push   edi
1008a567:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
1008a56a:	50                   	push   eax

100a40ac:	c7 83 28 14 00 00 00 	mov    DWORD PTR [ebx+0x1428],0x0
100a40b3:	00 00 00 
100a40b6:	c7 83 10 14 00 00 00 	mov    DWORD PTR [ebx+0x1410],0x0
100a40bd:	00 00 00 
100a40c0:	c7 83 24 14 00 00 00 	mov    DWORD PTR [ebx+0x1424],0x0
100a40c7:	00 00 00 
100a40ca:	c7 83 2c 14 00 00 00 	mov    DWORD PTR [ebx+0x142c],0x0
100a40d1:	00 00 00 
100a40d4:	c7 83 18 14 00 00 00 	mov    DWORD PTR [ebx+0x1418],0x0
100a40db:	00 00 00 

100a44e3:	74 0b                	je     0x100a44f0
100a44e5:	8b c8                	mov    ecx,eax
100a44e7:	e8 c4 1d f9 ff       	call   0x100362b0
100a44ec:	8b c8                	mov    ecx,eax
100a44ee:	eb 02                	jmp    0x100a44f2
100a44f0:	33 c9                	xor    ecx,ecx
100a44f2:	89 8b 2c 14 00 00    	mov    DWORD PTR [ebx+0x142c],ecx
100a44f8:	8b 01                	mov    eax,DWORD PTR [ecx]
100a44fa:	53                   	push   ebx
100a44fb:	c6 45 fc 00          	mov    BYTE PTR [ebp-0x4],0x0

100a923f:	8b 8e a4 14 00 00    	mov    ecx,DWORD PTR [esi+0x14a4]
100a9245:	85 c9                	test   ecx,ecx
100a9247:	74 07                	je     0x100a9250
100a9249:	8b 01                	mov    eax,DWORD PTR [ecx]
100a924b:	6a 00                	push   0x0
100a924d:	ff 50 24             	call   DWORD PTR [eax+0x24]
100a9250:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
100a9256:	85 c9                	test   ecx,ecx
100a9258:	74 05                	je     0x100a925f
100a925a:	e8 91 fb f8 ff       	call   0x10038df0

100aadf0:	56                   	push   esi
100aadf1:	8b f1                	mov    esi,ecx
100aadf3:	8b 8e e0 13 00 00    	mov    ecx,DWORD PTR [esi+0x13e0]
100aadf9:	85 c9                	test   ecx,ecx
100aadfb:	74 05                	je     0x100aae02
100aadfd:	e8 de 3e ff ff       	call   0x1009ece0
100aae02:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
100aae08:	5e                   	pop    esi
100aae09:	85 c9                	test   ecx,ecx
100aae0b:	0f 85 ef 0d f9 ff    	jne    0x1003bc00

100abac1:	84 c0                	test   al,al
100abac3:	74 0d                	je     0x100abad2
100abac5:	8b 8e e0 13 00 00    	mov    ecx,DWORD PTR [esi+0x13e0]
100abacb:	6a 00                	push   0x0
100abacd:	8b 01                	mov    eax,DWORD PTR [ecx]
100abacf:	ff 50 24             	call   DWORD PTR [eax+0x24]
100abad2:	8b 8e 2c 14 00 00    	mov    ecx,DWORD PTR [esi+0x142c]
100abad8:	8b 01                	mov    eax,DWORD PTR [ecx]
100abada:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
100abadd:	ff d0                	call   eax
