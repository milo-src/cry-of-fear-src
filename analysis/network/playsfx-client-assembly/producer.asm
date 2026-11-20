10080410:	55                   	push   ebp
10080411:	8b ec                	mov    ebp,esp
10080413:	81 ec 0c 02 00 00    	sub    esp,0x20c
10080419:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1008041e:	33 c5                	xor    eax,ebp
10080420:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10080423:	80 39 00             	cmp    BYTE PTR [ecx],0x0
10080426:	53                   	push   ebx
10080427:	56                   	push   esi
10080428:	57                   	push   edi
10080429:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008042c:	0f 84 b6 02 00 00    	je     0x100806e8
10080432:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
10080439:	0f 84 a9 02 00 00    	je     0x100806e8
1008043f:	68 c8 96 14 10       	push   0x101496c8
10080444:	57                   	push   edi
10080445:	e8 a6 38 05 00       	call   0x100d3cf0
1008044a:	83 c4 08             	add    esp,0x8
1008044d:	85 c0                	test   eax,eax
1008044f:	0f 84 bd 00 00 00    	je     0x10080512
10080455:	8b d7                	mov    edx,edi
10080457:	32 db                	xor    bl,bl
10080459:	33 f6                	xor    esi,esi
1008045b:	33 c9                	xor    ecx,ecx
1008045d:	8d 42 01             	lea    eax,[edx+0x1]
10080460:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
10080466:	8a 02                	mov    al,BYTE PTR [edx]
10080468:	42                   	inc    edx
10080469:	84 c0                	test   al,al
1008046b:	75 f9                	jne    0x10080466
1008046d:	2b 95 f8 fd ff ff    	sub    edx,DWORD PTR [ebp-0x208]
10080473:	0f 84 99 00 00 00    	je     0x10080512
10080479:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10080480:	8a 04 0f             	mov    al,BYTE PTR [edi+ecx*1]
10080483:	84 db                	test   bl,bl
10080485:	74 0a                	je     0x10080491
10080487:	88 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],al
1008048e:	46                   	inc    esi
1008048f:	eb 0a                	jmp    0x1008049b
10080491:	3c 2f                	cmp    al,0x2f
10080493:	74 04                	je     0x10080499
10080495:	3c 5c                	cmp    al,0x5c
10080497:	75 02                	jne    0x1008049b
10080499:	b3 01                	mov    bl,0x1
1008049b:	41                   	inc    ecx
1008049c:	3b ca                	cmp    ecx,edx
1008049e:	72 e0                	jb     0x10080480
100804a0:	84 db                	test   bl,bl
100804a2:	74 6e                	je     0x10080512
100804a4:	81 fe 00 01 00 00    	cmp    esi,0x100
100804aa:	0f 83 4b 02 00 00    	jae    0x100806fb
100804b0:	a1 dc 96 14 10       	mov    eax,ds:0x101496dc
100804b5:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
100804bb:	f3 0f 7e 05 d4 96 14 	movq   xmm0,QWORD PTR ds:0x101496d4
100804c2:	10 
100804c3:	89 85 04 fe ff ff    	mov    DWORD PTR [ebp-0x1fc],eax
100804c9:	a0 e0 96 14 10       	mov    al,ds:0x101496e0
100804ce:	c6 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],0x0
100804d5:	00 
100804d6:	8b f2                	mov    esi,edx
100804d8:	66 0f d6 85 fc fd ff 	movq   QWORD PTR [ebp-0x204],xmm0
100804df:	ff 
100804e0:	88 85 08 fe ff ff    	mov    BYTE PTR [ebp-0x1f8],al
100804e6:	8a 02                	mov    al,BYTE PTR [edx]
100804e8:	42                   	inc    edx
100804e9:	84 c0                	test   al,al
100804eb:	75 f9                	jne    0x100804e6
100804ed:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
100804f3:	2b d6                	sub    edx,esi
100804f5:	4f                   	dec    edi
100804f6:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100804f9:	47                   	inc    edi
100804fa:	84 c0                	test   al,al
100804fc:	75 f8                	jne    0x100804f6
100804fe:	8b ca                	mov    ecx,edx
10080500:	c1 e9 02             	shr    ecx,0x2
10080503:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10080505:	8b ca                	mov    ecx,edx
10080507:	83 e1 03             	and    ecx,0x3
1008050a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1008050c:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
10080512:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10080515:	83 f8 01             	cmp    eax,0x1
10080518:	0f 85 e3 00 00 00    	jne    0x10080601
1008051e:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
10080524:	85 c9                	test   ecx,ecx
10080526:	74 05                	je     0x1008052d
10080528:	8b 01                	mov    eax,DWORD PTR [ecx]
1008052a:	ff 50 18             	call   DWORD PTR [eax+0x18]
1008052d:	57                   	push   edi
1008052e:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
10080534:	50                   	push   eax
10080535:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1008053b:	68 ac 09 15 10       	push   0x101509ac
10080540:	50                   	push   eax
10080541:	e8 ba c3 f8 ff       	call   0x1000c900
10080546:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1008054c:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080552:	83 c4 10             	add    esp,0x10
10080555:	8b 01                	mov    eax,DWORD PTR [ecx]
10080557:	6a 00                	push   0x0
10080559:	6a 00                	push   0x0
1008055b:	6a 01                	push   0x1
1008055d:	6a 01                	push   0x1
1008055f:	6a 01                	push   0x1
10080561:	52                   	push   edx
10080562:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080565:	a3 ac 40 54 10       	mov    ds:0x105440ac,eax
1008056a:	85 c0                	test   eax,eax
1008056c:	0f 84 76 01 00 00    	je     0x100806e8
10080572:	68 b8 09 15 10       	push   0x101509b8
10080577:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
1008057d:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
10080584:	10 
10080585:	0f 57 c9             	xorps  xmm1,xmm1
10080588:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
1008058e:	d9 9d f8 fd ff ff    	fstp   DWORD PTR [ebp-0x208]
10080594:	f3 0f 5d 85 f8 fd ff 	minss  xmm0,DWORD PTR [ebp-0x208]
1008059b:	ff 
1008059c:	8b 01                	mov    eax,DWORD PTR [ecx]
1008059e:	f3 0f 5f c8          	maxss  xmm1,xmm0
100805a2:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100805a7:	ff 50 20             	call   DWORD PTR [eax+0x20]
100805aa:	a1 ac 40 54 10       	mov    eax,ds:0x105440ac
100805af:	83 ec 08             	sub    esp,0x8
100805b2:	8b 30                	mov    esi,DWORD PTR [eax]
100805b4:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3dcccccd
100805bb:	3d 
100805bc:	c7 04 24 cd cc cc bd 	mov    DWORD PTR [esp],0xbdcccccd
100805c3:	ff 15 14 27 1b 10    	call   DWORD PTR ds:0x101b2714
100805c9:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
100805cf:	83 c4 04             	add    esp,0x4
100805d2:	dd 9d f4 fd ff ff    	fstp   QWORD PTR [ebp-0x20c]
100805d8:	f2 0f 10 85 f4 fd ff 	movsd  xmm0,QWORD PTR [ebp-0x20c]
100805df:	ff 
100805e0:	f2 0f 58 05 c0 ee 13 	addsd  xmm0,QWORD PTR ds:0x1013eec0
100805e7:	10 
100805e8:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100805ec:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100805f1:	ff 56 60             	call   DWORD PTR [esi+0x60]
100805f4:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
100805fa:	8b 01                	mov    eax,DWORD PTR [ecx]
100805fc:	e9 e2 00 00 00       	jmp    0x100806e3
10080601:	83 f8 02             	cmp    eax,0x2
10080604:	75 26                	jne    0x1008062c
10080606:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
1008060c:	85 c9                	test   ecx,ecx
1008060e:	0f 84 d4 00 00 00    	je     0x100806e8
10080614:	8b 01                	mov    eax,DWORD PTR [ecx]
10080616:	ff 50 18             	call   DWORD PTR [eax+0x18]
10080619:	5f                   	pop    edi
1008061a:	5e                   	pop    esi
1008061b:	5b                   	pop    ebx
1008061c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1008061f:	33 cd                	xor    ecx,ebp
10080621:	e8 9a 3c 03 00       	call   0x100b42c0
10080626:	8b e5                	mov    esp,ebp
10080628:	5d                   	pop    ebp
10080629:	c2 18 00             	ret    0x18
1008062c:	57                   	push   edi
1008062d:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
10080633:	50                   	push   eax
10080634:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1008063a:	68 ac 09 15 10       	push   0x101509ac
1008063f:	50                   	push   eax
10080640:	e8 bb c2 f8 ff       	call   0x1000c900
10080645:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1008064b:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080651:	83 c4 10             	add    esp,0x10
10080654:	8b 01                	mov    eax,DWORD PTR [ecx]
10080656:	6a 00                	push   0x0
10080658:	6a 00                	push   0x0
1008065a:	6a 01                	push   0x1
1008065c:	6a 01                	push   0x1
1008065e:	6a 00                	push   0x0
10080660:	52                   	push   edx
10080661:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080664:	8b f8                	mov    edi,eax
10080666:	85 ff                	test   edi,edi
10080668:	74 7e                	je     0x100806e8
1008066a:	68 b8 09 15 10       	push   0x101509b8
1008066f:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
10080675:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
1008067c:	10 
1008067d:	0f 57 c9             	xorps  xmm1,xmm1
10080680:	8b 07                	mov    eax,DWORD PTR [edi]
10080682:	8b cf                	mov    ecx,edi
10080684:	d9 9d f8 fd ff ff    	fstp   DWORD PTR [ebp-0x208]
1008068a:	f3 0f 5d 85 f8 fd ff 	minss  xmm0,DWORD PTR [ebp-0x208]
10080691:	ff 
10080692:	f3 0f 5f c8          	maxss  xmm1,xmm0
10080696:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008069b:	ff 50 20             	call   DWORD PTR [eax+0x20]
1008069e:	8b 37                	mov    esi,DWORD PTR [edi]
100806a0:	83 ec 08             	sub    esp,0x8
100806a3:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3dcccccd
100806aa:	3d 
100806ab:	c7 04 24 cd cc cc bd 	mov    DWORD PTR [esp],0xbdcccccd
100806b2:	ff 15 14 27 1b 10    	call   DWORD PTR ds:0x101b2714
100806b8:	dd 9d f4 fd ff ff    	fstp   QWORD PTR [ebp-0x20c]
100806be:	f2 0f 10 85 f4 fd ff 	movsd  xmm0,QWORD PTR [ebp-0x20c]
100806c5:	ff 
100806c6:	83 c4 04             	add    esp,0x4
100806c9:	f2 0f 58 05 c0 ee 13 	addsd  xmm0,QWORD PTR ds:0x1013eec0
100806d0:	10 
100806d1:	8b cf                	mov    ecx,edi
100806d3:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100806d7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100806dc:	ff 56 60             	call   DWORD PTR [esi+0x60]
100806df:	8b 07                	mov    eax,DWORD PTR [edi]
100806e1:	8b cf                	mov    ecx,edi
100806e3:	6a 00                	push   0x0
100806e5:	ff 50 10             	call   DWORD PTR [eax+0x10]
100806e8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100806eb:	5f                   	pop    edi
100806ec:	5e                   	pop    esi
100806ed:	33 cd                	xor    ecx,ebp
100806ef:	5b                   	pop    ebx
100806f0:	e8 cb 3b 03 00       	call   0x100b42c0
100806f5:	8b e5                	mov    esp,ebp
100806f7:	5d                   	pop    ebp
100806f8:	c2 18 00             	ret    0x18
100806fb:	e8 ae 44 03 00       	call   0x100b4bae
