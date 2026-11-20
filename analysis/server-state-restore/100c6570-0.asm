
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c6570 <.text+0xc5570>:
100c6570:	55                   	push   ebp
100c6571:	8b ec                	mov    ebp,esp
100c6573:	6a ff                	push   0xffffffff
100c6575:	68 ab dd 19 10       	push   0x1019ddab
100c657a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100c6580:	50                   	push   eax
100c6581:	81 ec d8 05 00 00    	sub    esp,0x5d8
100c6587:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c658c:	33 c5                	xor    eax,ebp
100c658e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100c6591:	53                   	push   ebx
100c6592:	56                   	push   esi
100c6593:	57                   	push   edi
100c6594:	50                   	push   eax
100c6595:	8d 45 f4             	lea    eax,[ebp-0xc]
100c6598:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100c659e:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c65a1:	85 db                	test   ebx,ebx
100c65a3:	0f 84 0d 08 00 00    	je     0x100c6db6
100c65a9:	8d 85 f0 fa ff ff    	lea    eax,[ebp-0x510]
100c65af:	50                   	push   eax
100c65b0:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100c65b6:	8d 8d f0 fa ff ff    	lea    ecx,[ebp-0x510]
100c65bc:	83 c4 04             	add    esp,0x4
100c65bf:	49                   	dec    ecx
100c65c0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c65c3:	8d 49 01             	lea    ecx,[ecx+0x1]
100c65c6:	84 c0                	test   al,al
100c65c8:	75 f6                	jne    0x100c65c0
100c65ca:	a1 a0 61 1d 10       	mov    eax,ds:0x101d61a0
100c65cf:	89 01                	mov    DWORD PTR [ecx],eax
100c65d1:	66 a1 a4 61 1d 10    	mov    ax,ds:0x101d61a4
100c65d7:	66 89 41 04          	mov    WORD PTR [ecx+0x4],ax
100c65db:	a0 a6 61 1d 10       	mov    al,ds:0x101d61a6
100c65e0:	88 41 06             	mov    BYTE PTR [ecx+0x6],al
100c65e3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c65e8:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100c65ee:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
100c65f1:	8b f2                	mov    esi,edx
100c65f3:	8a 02                	mov    al,BYTE PTR [edx]
100c65f5:	42                   	inc    edx
100c65f6:	84 c0                	test   al,al
100c65f8:	75 f9                	jne    0x100c65f3
100c65fa:	8d bd f0 fa ff ff    	lea    edi,[ebp-0x510]
100c6600:	2b d6                	sub    edx,esi
100c6602:	4f                   	dec    edi
100c6603:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100c6606:	47                   	inc    edi
100c6607:	84 c0                	test   al,al
100c6609:	75 f8                	jne    0x100c6603
100c660b:	8b ca                	mov    ecx,edx
100c660d:	c1 e9 02             	shr    ecx,0x2
100c6610:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100c6612:	8b ca                	mov    ecx,edx
100c6614:	83 e1 03             	and    ecx,0x3
100c6617:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100c6619:	8d 8d f0 fa ff ff    	lea    ecx,[ebp-0x510]
100c661f:	49                   	dec    ecx
100c6620:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c6623:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6626:	84 c0                	test   al,al
100c6628:	75 f6                	jne    0x100c6620
100c662a:	a1 4c 14 1b 10       	mov    eax,ds:0x101b144c
100c662f:	89 01                	mov    DWORD PTR [ecx],eax
100c6631:	a0 50 14 1b 10       	mov    al,ds:0x101b1450
100c6636:	6a 01                	push   0x1
100c6638:	6a 40                	push   0x40
100c663a:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100c663d:	8d 85 f0 fa ff ff    	lea    eax,[ebp-0x510]
100c6643:	6a 01                	push   0x1
100c6645:	50                   	push   eax
100c6646:	8d 8d 1c fa ff ff    	lea    ecx,[ebp-0x5e4]
100c664c:	e8 7f 92 f6 ff       	call   0x1002f8d0
100c6651:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100c6658:	c7 85 e8 fa ff ff 00 	mov    DWORD PTR [ebp-0x518],0x0
100c665f:	00 00 00 
100c6662:	c7 85 ec fa ff ff 0f 	mov    DWORD PTR [ebp-0x514],0xf
100c6669:	00 00 00 
100c666c:	c6 85 d8 fa ff ff 00 	mov    BYTE PTR [ebp-0x528],0x0
100c6673:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6679:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
100c667d:	50                   	push   eax
100c667e:	8d 85 1c fa ff ff    	lea    eax,[ebp-0x5e4]
100c6684:	50                   	push   eax
100c6685:	e8 c6 8e f6 ff       	call   0x1002f550
100c668a:	83 c4 08             	add    esp,0x8
100c668d:	8b 08                	mov    ecx,DWORD PTR [eax]
100c668f:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c6692:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c6697:	0f 85 b2 06 00 00    	jne    0x100c6d4f
100c669d:	0f 1f 00             	nop    DWORD PTR [eax]
100c66a0:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c66a7:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c66ad:	68 54 14 1b 10       	push   0x101b1454
100c66b2:	0f 43 85 d8 fa ff ff 	cmovae eax,DWORD PTR [ebp-0x528]
100c66b9:	50                   	push   eax
100c66ba:	e8 31 8f 07 00       	call   0x1013f5f0
100c66bf:	83 c4 08             	add    esp,0x8
100c66c2:	85 c0                	test   eax,eax
100c66c4:	0f 84 9e 00 00 00    	je     0x100c6768
100c66ca:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c66d0:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c66d6:	ba 07 00 00 00       	mov    edx,0x7
100c66db:	3b c2                	cmp    eax,edx
100c66dd:	0f 42 d0             	cmovb  edx,eax
100c66e0:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c66e7:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c66ee:	2b c2                	sub    eax,edx
100c66f0:	89 85 e8 fa ff ff    	mov    DWORD PTR [ebp-0x518],eax
100c66f6:	40                   	inc    eax
100c66f7:	50                   	push   eax
100c66f8:	8d 04 11             	lea    eax,[ecx+edx*1]
100c66fb:	50                   	push   eax
100c66fc:	51                   	push   ecx
100c66fd:	e8 ae 9f 07 00       	call   0x101406b0
100c6702:	83 c4 0c             	add    esp,0xc
100c6705:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c670b:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c6712:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6718:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c671f:	2b d1                	sub    edx,ecx
100c6721:	8a 01                	mov    al,BYTE PTR [ecx]
100c6723:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6726:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c672a:	84 c0                	test   al,al
100c672c:	75 f3                	jne    0x100c6721
100c672e:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6734:	3d 00 01 00 00       	cmp    eax,0x100
100c6739:	0f 83 93 06 00 00    	jae    0x100c6dd2
100c673f:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6746:	00 
100c6747:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c674d:	50                   	push   eax
100c674e:	e8 0b 4e 0a 00       	call   0x1016b55e
100c6753:	83 c4 04             	add    esp,0x4
100c6756:	66 0f 6e c0          	movd   xmm0,eax
100c675a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c675d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c6760:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
100c6767:	00 
100c6768:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c676f:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6775:	68 5c 14 1b 10       	push   0x101b145c
100c677a:	0f 43 85 d8 fa ff ff 	cmovae eax,DWORD PTR [ebp-0x528]
100c6781:	50                   	push   eax
100c6782:	e8 69 8e 07 00       	call   0x1013f5f0
100c6787:	83 c4 08             	add    esp,0x8
100c678a:	85 c0                	test   eax,eax
100c678c:	0f 84 a2 00 00 00    	je     0x100c6834
100c6792:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6798:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c679e:	ba 08 00 00 00       	mov    edx,0x8
100c67a3:	3b c2                	cmp    eax,edx
100c67a5:	0f 42 d0             	cmovb  edx,eax
100c67a8:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c67af:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c67b6:	2b c2                	sub    eax,edx
100c67b8:	89 85 e8 fa ff ff    	mov    DWORD PTR [ebp-0x518],eax
100c67be:	40                   	inc    eax
100c67bf:	50                   	push   eax
100c67c0:	8d 04 11             	lea    eax,[ecx+edx*1]
100c67c3:	50                   	push   eax
100c67c4:	51                   	push   ecx
100c67c5:	e8 e6 9e 07 00       	call   0x101406b0
100c67ca:	83 c4 0c             	add    esp,0xc
100c67cd:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c67d3:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c67da:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c67e0:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c67e7:	2b d1                	sub    edx,ecx
100c67e9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c67f0:	8a 01                	mov    al,BYTE PTR [ecx]
100c67f2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c67f5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c67f9:	84 c0                	test   al,al
100c67fb:	75 f3                	jne    0x100c67f0
100c67fd:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6803:	3d 00 01 00 00       	cmp    eax,0x100
100c6808:	0f 83 c4 05 00 00    	jae    0x100c6dd2
100c680e:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6815:	00 
100c6816:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c681c:	50                   	push   eax
100c681d:	e8 3c 4d 0a 00       	call   0x1016b55e
100c6822:	83 c4 04             	add    esp,0x4
100c6825:	66 0f 6e c0          	movd   xmm0,eax
100c6829:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c682c:	f3 0f 11 83 f0 21 00 	movss  DWORD PTR [ebx+0x21f0],xmm0
100c6833:	00 
100c6834:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c683b:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6841:	68 68 14 1b 10       	push   0x101b1468
100c6846:	0f 43 85 d8 fa ff ff 	cmovae eax,DWORD PTR [ebp-0x528]
100c684d:	50                   	push   eax
100c684e:	e8 9d 8d 07 00       	call   0x1013f5f0
100c6853:	83 c4 08             	add    esp,0x8
100c6856:	85 c0                	test   eax,eax
100c6858:	0f 84 a5 00 00 00    	je     0x100c6903
100c685e:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6864:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c686a:	ba 0a 00 00 00       	mov    edx,0xa
100c686f:	3b c2                	cmp    eax,edx
100c6871:	0f 42 d0             	cmovb  edx,eax
100c6874:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c687b:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6882:	2b c2                	sub    eax,edx
100c6884:	89 85 e8 fa ff ff    	mov    DWORD PTR [ebp-0x518],eax
100c688a:	40                   	inc    eax
100c688b:	50                   	push   eax
100c688c:	8d 04 11             	lea    eax,[ecx+edx*1]
100c688f:	50                   	push   eax
100c6890:	51                   	push   ecx
100c6891:	e8 1a 9e 07 00       	call   0x101406b0
100c6896:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c689c:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c68a2:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c68a8:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c68ae:	83 c4 0c             	add    esp,0xc
100c68b1:	83 fe 10             	cmp    esi,0x10
100c68b4:	0f 43 cf             	cmovae ecx,edi
100c68b7:	2b d1                	sub    edx,ecx
100c68b9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c68c0:	8a 01                	mov    al,BYTE PTR [ecx]
100c68c2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c68c5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c68c9:	84 c0                	test   al,al
100c68cb:	75 f3                	jne    0x100c68c0
100c68cd:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c68d3:	3d 00 01 00 00       	cmp    eax,0x100
100c68d8:	0f 83 f4 04 00 00    	jae    0x100c6dd2
100c68de:	8d 8b 4c 20 00 00    	lea    ecx,[ebx+0x204c]
100c68e4:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c68eb:	00 
100c68ec:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c68f2:	2b d1                	sub    edx,ecx
100c68f4:	8a 01                	mov    al,BYTE PTR [ecx]
100c68f6:	8d 49 01             	lea    ecx,[ecx+0x1]
100c68f9:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c68fd:	84 c0                	test   al,al
100c68ff:	75 f3                	jne    0x100c68f4
100c6901:	eb 0c                	jmp    0x100c690f
100c6903:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c6909:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c690f:	83 fe 10             	cmp    esi,0x10
100c6912:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6918:	68 74 14 1b 10       	push   0x101b1474
100c691d:	0f 43 c7             	cmovae eax,edi
100c6920:	50                   	push   eax
100c6921:	e8 ca 8c 07 00       	call   0x1013f5f0
100c6926:	83 c4 08             	add    esp,0x8
100c6929:	85 c0                	test   eax,eax
100c692b:	0f 84 a2 00 00 00    	je     0x100c69d3
100c6931:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6937:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c693d:	ba 0a 00 00 00       	mov    edx,0xa
100c6942:	3b c2                	cmp    eax,edx
100c6944:	0f 42 d0             	cmovb  edx,eax
100c6947:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c694e:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6955:	2b c2                	sub    eax,edx
100c6957:	89 85 e8 fa ff ff    	mov    DWORD PTR [ebp-0x518],eax
100c695d:	40                   	inc    eax
100c695e:	50                   	push   eax
100c695f:	8d 04 11             	lea    eax,[ecx+edx*1]
100c6962:	50                   	push   eax
100c6963:	51                   	push   ecx
100c6964:	e8 47 9d 07 00       	call   0x101406b0
100c6969:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c696f:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6975:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c697b:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6981:	83 c4 0c             	add    esp,0xc
100c6984:	83 fe 10             	cmp    esi,0x10
100c6987:	0f 43 cf             	cmovae ecx,edi
100c698a:	2b d1                	sub    edx,ecx
100c698c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c6990:	8a 01                	mov    al,BYTE PTR [ecx]
100c6992:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6995:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6999:	84 c0                	test   al,al
100c699b:	75 f3                	jne    0x100c6990
100c699d:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c69a3:	3d 00 01 00 00       	cmp    eax,0x100
100c69a8:	0f 83 24 04 00 00    	jae    0x100c6dd2
100c69ae:	8d 8b cc 20 00 00    	lea    ecx,[ebx+0x20cc]
100c69b4:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c69bb:	00 
100c69bc:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c69c2:	2b d1                	sub    edx,ecx
100c69c4:	8a 01                	mov    al,BYTE PTR [ecx]
100c69c6:	8d 49 01             	lea    ecx,[ecx+0x1]
100c69c9:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c69cd:	84 c0                	test   al,al
100c69cf:	75 f3                	jne    0x100c69c4
100c69d1:	eb 0c                	jmp    0x100c69df
100c69d3:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c69d9:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c69df:	83 fe 10             	cmp    esi,0x10
100c69e2:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c69e8:	68 80 14 1b 10       	push   0x101b1480
100c69ed:	0f 43 c7             	cmovae eax,edi
100c69f0:	50                   	push   eax
100c69f1:	e8 fa 8b 07 00       	call   0x1013f5f0
100c69f6:	83 c4 08             	add    esp,0x8
100c69f9:	85 c0                	test   eax,eax
100c69fb:	0f 84 a2 00 00 00    	je     0x100c6aa3
100c6a01:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6a07:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6a0d:	ba 0a 00 00 00       	mov    edx,0xa
100c6a12:	3b c2                	cmp    eax,edx
100c6a14:	0f 42 d0             	cmovb  edx,eax
100c6a17:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c6a1e:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6a25:	2b c2                	sub    eax,edx
100c6a27:	89 85 e8 fa ff ff    	mov    DWORD PTR [ebp-0x518],eax
100c6a2d:	40                   	inc    eax
100c6a2e:	50                   	push   eax
100c6a2f:	8d 04 11             	lea    eax,[ecx+edx*1]
100c6a32:	50                   	push   eax
100c6a33:	51                   	push   ecx
100c6a34:	e8 77 9c 07 00       	call   0x101406b0
100c6a39:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c6a3f:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6a45:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c6a4b:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6a51:	83 c4 0c             	add    esp,0xc
100c6a54:	83 fe 10             	cmp    esi,0x10
100c6a57:	0f 43 cf             	cmovae ecx,edi
100c6a5a:	2b d1                	sub    edx,ecx
100c6a5c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c6a60:	8a 01                	mov    al,BYTE PTR [ecx]
100c6a62:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6a65:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6a69:	84 c0                	test   al,al
100c6a6b:	75 f3                	jne    0x100c6a60
100c6a6d:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6a73:	3d 00 01 00 00       	cmp    eax,0x100
100c6a78:	0f 83 54 03 00 00    	jae    0x100c6dd2
100c6a7e:	8d 8b 4c 21 00 00    	lea    ecx,[ebx+0x214c]
100c6a84:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6a8b:	00 
100c6a8c:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6a92:	2b d1                	sub    edx,ecx
100c6a94:	8a 01                	mov    al,BYTE PTR [ecx]
100c6a96:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6a99:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6a9d:	84 c0                	test   al,al
100c6a9f:	75 f3                	jne    0x100c6a94
100c6aa1:	eb 0c                	jmp    0x100c6aaf
100c6aa3:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c6aa9:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c6aaf:	83 fe 10             	cmp    esi,0x10
100c6ab2:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6ab8:	68 90 87 1a 10       	push   0x101a8790
100c6abd:	0f 43 c7             	cmovae eax,edi
100c6ac0:	50                   	push   eax
100c6ac1:	e8 2a 8b 07 00       	call   0x1013f5f0
100c6ac6:	83 c4 08             	add    esp,0x8
100c6ac9:	85 c0                	test   eax,eax
100c6acb:	0f 84 58 02 00 00    	je     0x100c6d29
100c6ad1:	8b b5 ec fa ff ff    	mov    esi,DWORD PTR [ebp-0x514]
100c6ad7:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6add:	8b bd d8 fa ff ff    	mov    edi,DWORD PTR [ebp-0x528]
100c6ae3:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6ae9:	83 fe 10             	cmp    esi,0x10
100c6aec:	0f 43 cf             	cmovae ecx,edi
100c6aef:	2b d1                	sub    edx,ecx
100c6af1:	8a 01                	mov    al,BYTE PTR [ecx]
100c6af3:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6af6:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6afa:	84 c0                	test   al,al
100c6afc:	75 f3                	jne    0x100c6af1
100c6afe:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6b04:	3d 00 01 00 00       	cmp    eax,0x100
100c6b09:	0f 83 c3 02 00 00    	jae    0x100c6dd2
100c6b0f:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6b16:	00 
100c6b17:	83 fe 10             	cmp    esi,0x10
100c6b1a:	6a 00                	push   0x0
100c6b1c:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6b22:	c6 05 88 64 22 10 01 	mov    BYTE PTR ds:0x10226488,0x1
100c6b29:	0f 43 c7             	cmovae eax,edi
100c6b2c:	8b cb                	mov    ecx,ebx
100c6b2e:	6a 00                	push   0x0
100c6b30:	50                   	push   eax
100c6b31:	e8 4a 9f 01 00       	call   0x100e0a80
100c6b36:	8d b3 14 25 00 00    	lea    esi,[ebx+0x2514]
100c6b3c:	c6 05 88 64 22 10 00 	mov    BYTE PTR ds:0x10226488,0x0
100c6b43:	33 ff                	xor    edi,edi
100c6b45:	89 b5 d4 fa ff ff    	mov    DWORD PTR [ebp-0x52c],esi
100c6b4b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100c6b50:	8b 36                	mov    esi,DWORD PTR [esi]
100c6b52:	85 f6                	test   esi,esi
100c6b54:	0f 84 b6 01 00 00    	je     0x100c6d10
100c6b5a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c6b5d:	ba e4 9a 1a 10       	mov    edx,0x101a9ae4
100c6b62:	8b 08                	mov    ecx,DWORD PTR [eax]
100c6b64:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c6b69:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c6b6f:	90                   	nop
100c6b70:	8a 01                	mov    al,BYTE PTR [ecx]
100c6b72:	3a 02                	cmp    al,BYTE PTR [edx]
100c6b74:	75 1a                	jne    0x100c6b90
100c6b76:	84 c0                	test   al,al
100c6b78:	74 12                	je     0x100c6b8c
100c6b7a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c6b7d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100c6b80:	75 0e                	jne    0x100c6b90
100c6b82:	83 c1 02             	add    ecx,0x2
100c6b85:	83 c2 02             	add    edx,0x2
100c6b88:	84 c0                	test   al,al
100c6b8a:	75 e4                	jne    0x100c6b70
100c6b8c:	33 c0                	xor    eax,eax
100c6b8e:	eb 05                	jmp    0x100c6b95
100c6b90:	1b c0                	sbb    eax,eax
100c6b92:	83 c8 01             	or     eax,0x1
100c6b95:	85 c0                	test   eax,eax
100c6b97:	0f 84 73 01 00 00    	je     0x100c6d10
100c6b9d:	0f 1f 00             	nop    DWORD PTR [eax]
100c6ba0:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100c6ba7:	83 b8 90 18 23 10 00 	cmp    DWORD PTR [eax+0x10231890],0x0
100c6bae:	0f 84 4e 01 00 00    	je     0x100c6d02
100c6bb4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c6bb7:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6bbd:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c6bc4:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6bcb:	8b 10                	mov    edx,DWORD PTR [eax]
100c6bcd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c6bd2:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
100c6bd8:	8a 02                	mov    al,BYTE PTR [edx]
100c6bda:	3a 01                	cmp    al,BYTE PTR [ecx]
100c6bdc:	75 1a                	jne    0x100c6bf8
100c6bde:	84 c0                	test   al,al
100c6be0:	74 12                	je     0x100c6bf4
100c6be2:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
100c6be5:	3a 41 01             	cmp    al,BYTE PTR [ecx+0x1]
100c6be8:	75 0e                	jne    0x100c6bf8
100c6bea:	83 c2 02             	add    edx,0x2
100c6bed:	83 c1 02             	add    ecx,0x2
100c6bf0:	84 c0                	test   al,al
100c6bf2:	75 e4                	jne    0x100c6bd8
100c6bf4:	33 c0                	xor    eax,eax
100c6bf6:	eb 05                	jmp    0x100c6bfd
100c6bf8:	1b c0                	sbb    eax,eax
100c6bfa:	83 c8 01             	or     eax,0x1
100c6bfd:	85 c0                	test   eax,eax
100c6bff:	0f 85 fd 00 00 00    	jne    0x100c6d02
100c6c05:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6c0b:	50                   	push   eax
100c6c0c:	8d 85 1c fa ff ff    	lea    eax,[ebp-0x5e4]
100c6c12:	50                   	push   eax
100c6c13:	e8 38 89 f6 ff       	call   0x1002f550
100c6c18:	83 c4 08             	add    esp,0x8
100c6c1b:	8b 08                	mov    ecx,DWORD PTR [eax]
100c6c1d:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c6c20:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c6c25:	75 57                	jne    0x100c6c7e
100c6c27:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c6c2e:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6c34:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6c3a:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6c41:	2b d1                	sub    edx,ecx
100c6c43:	8a 01                	mov    al,BYTE PTR [ecx]
100c6c45:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6c48:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6c4c:	84 c0                	test   al,al
100c6c4e:	75 f3                	jne    0x100c6c43
100c6c50:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6c56:	3d 00 01 00 00       	cmp    eax,0x100
100c6c5b:	0f 83 71 01 00 00    	jae    0x100c6dd2
100c6c61:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6c68:	00 
100c6c69:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c6c6f:	50                   	push   eax
100c6c70:	e8 e9 48 0a 00       	call   0x1016b55e
100c6c75:	83 c4 04             	add    esp,0x4
100c6c78:	89 86 e4 01 00 00    	mov    DWORD PTR [esi+0x1e4],eax
100c6c7e:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6c84:	50                   	push   eax
100c6c85:	8d 85 1c fa ff ff    	lea    eax,[ebp-0x5e4]
100c6c8b:	50                   	push   eax
100c6c8c:	e8 bf 88 f6 ff       	call   0x1002f550
100c6c91:	83 c4 08             	add    esp,0x8
100c6c94:	8b 08                	mov    ecx,DWORD PTR [eax]
100c6c96:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c6c99:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c6c9e:	75 62                	jne    0x100c6d02
100c6ca0:	83 bd ec fa ff ff 10 	cmp    DWORD PTR [ebp-0x514],0x10
100c6ca7:	8d 8d d8 fa ff ff    	lea    ecx,[ebp-0x528]
100c6cad:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6cb3:	0f 43 8d d8 fa ff ff 	cmovae ecx,DWORD PTR [ebp-0x528]
100c6cba:	2b d1                	sub    edx,ecx
100c6cbc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c6cc0:	8a 01                	mov    al,BYTE PTR [ecx]
100c6cc2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6cc5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6cc9:	84 c0                	test   al,al
100c6ccb:	75 f3                	jne    0x100c6cc0
100c6ccd:	8b 85 e8 fa ff ff    	mov    eax,DWORD PTR [ebp-0x518]
100c6cd3:	3d 00 01 00 00       	cmp    eax,0x100
100c6cd8:	0f 83 f4 00 00 00    	jae    0x100c6dd2
100c6cde:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6ce5:	00 
100c6ce6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c6cec:	50                   	push   eax
100c6ced:	e8 6c 48 0a 00       	call   0x1016b55e
100c6cf2:	8b 8e dc 01 00 00    	mov    ecx,DWORD PTR [esi+0x1dc]
100c6cf8:	83 c4 04             	add    esp,0x4
100c6cfb:	89 84 8b 40 25 00 00 	mov    DWORD PTR [ebx+ecx*4+0x2540],eax
100c6d02:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100c6d08:	85 f6                	test   esi,esi
100c6d0a:	0f 85 90 fe ff ff    	jne    0x100c6ba0
100c6d10:	8b b5 d4 fa ff ff    	mov    esi,DWORD PTR [ebp-0x52c]
100c6d16:	47                   	inc    edi
100c6d17:	83 c6 04             	add    esi,0x4
100c6d1a:	89 b5 d4 fa ff ff    	mov    DWORD PTR [ebp-0x52c],esi
100c6d20:	83 ff 06             	cmp    edi,0x6
100c6d23:	0f 8c 27 fe ff ff    	jl     0x100c6b50
100c6d29:	8d 85 d8 fa ff ff    	lea    eax,[ebp-0x528]
100c6d2f:	50                   	push   eax
100c6d30:	8d 85 1c fa ff ff    	lea    eax,[ebp-0x5e4]
100c6d36:	50                   	push   eax
100c6d37:	e8 14 88 f6 ff       	call   0x1002f550
100c6d3c:	83 c4 08             	add    esp,0x8
100c6d3f:	8b 08                	mov    ecx,DWORD PTR [eax]
100c6d41:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c6d44:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c6d49:	0f 84 51 f9 ff ff    	je     0x100c66a0
100c6d4f:	be 01 00 00 00       	mov    esi,0x1
100c6d54:	8d bb 00 22 00 00    	lea    edi,[ebx+0x2200]
100c6d5a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c6d60:	6a 00                	push   0x0
100c6d62:	ff 37                	push   DWORD PTR [edi]
100c6d64:	8b cb                	mov    ecx,ebx
100c6d66:	56                   	push   esi
100c6d67:	e8 f4 d5 01 00       	call   0x100e4360
100c6d6c:	46                   	inc    esi
100c6d6d:	8d 7f 04             	lea    edi,[edi+0x4]
100c6d70:	83 fe 06             	cmp    esi,0x6
100c6d73:	7e eb                	jle    0x100c6d60
100c6d75:	8b 85 ec fa ff ff    	mov    eax,DWORD PTR [ebp-0x514]
100c6d7b:	83 f8 10             	cmp    eax,0x10
100c6d7e:	72 10                	jb     0x100c6d90
100c6d80:	40                   	inc    eax
100c6d81:	50                   	push   eax
100c6d82:	ff b5 d8 fa ff ff    	push   DWORD PTR [ebp-0x528]
100c6d88:	e8 03 85 f6 ff       	call   0x1002f290
100c6d8d:	83 c4 08             	add    esp,0x8
100c6d90:	8d 8d 1c fa ff ff    	lea    ecx,[ebp-0x5e4]
100c6d96:	c7 85 e8 fa ff ff 00 	mov    DWORD PTR [ebp-0x518],0x0
100c6d9d:	00 00 00 
100c6da0:	c7 85 ec fa ff ff 0f 	mov    DWORD PTR [ebp-0x514],0xf
100c6da7:	00 00 00 
100c6daa:	c6 85 d8 fa ff ff 00 	mov    BYTE PTR [ebp-0x528],0x0
100c6db1:	e8 3a 9b f6 ff       	call   0x100308f0
100c6db6:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100c6db9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100c6dc0:	59                   	pop    ecx
100c6dc1:	5f                   	pop    edi
100c6dc2:	5e                   	pop    esi
100c6dc3:	5b                   	pop    ebx
100c6dc4:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100c6dc7:	33 cd                	xor    ecx,ebp
100c6dc9:	e8 e5 6d 07 00       	call   0x1013dbb3
100c6dce:	8b e5                	mov    esp,ebp
100c6dd0:	5d                   	pop    ebp
100c6dd1:	c3                   	ret
100c6dd2:	e8 71 6f 07 00       	call   0x1013dd48
