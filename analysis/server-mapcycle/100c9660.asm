
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c9660 <.text+0xc8660>:
100c9660:	55                   	push   ebp
100c9661:	8b ec                	mov    ebp,esp
100c9663:	81 ec 38 04 00 00    	sub    esp,0x438
100c9669:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c966e:	33 c5                	xor    eax,ebp
100c9670:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c9673:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c9676:	8d 8d cc fb ff ff    	lea    ecx,[ebp-0x434]
100c967c:	53                   	push   ebx
100c967d:	56                   	push   esi
100c967e:	57                   	push   edi
100c967f:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100c9682:	51                   	push   ecx
100c9683:	50                   	push   eax
100c9684:	89 bd d0 fb ff ff    	mov    DWORD PTR [ebp-0x430],edi
100c968a:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100c9690:	8b f0                	mov    esi,eax
100c9692:	83 c4 08             	add    esp,0x8
100c9695:	33 db                	xor    ebx,ebx
100c9697:	89 b5 c8 fb ff ff    	mov    DWORD PTR [ebp-0x438],esi
100c969d:	85 f6                	test   esi,esi
100c969f:	0f 84 66 02 00 00    	je     0x100c990b
100c96a5:	39 9d cc fb ff ff    	cmp    DWORD PTR [ebp-0x434],ebx
100c96ab:	0f 84 5a 02 00 00    	je     0x100c990b
100c96b1:	68 00 04 00 00       	push   0x400
100c96b6:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c96bc:	53                   	push   ebx
100c96bd:	50                   	push   eax
100c96be:	e8 cd 5d 07 00       	call   0x1013f490
100c96c3:	56                   	push   esi
100c96c4:	e8 17 d7 ff ff       	call   0x100c6de0
100c96c9:	ba a8 31 22 10       	mov    edx,0x102231a8
100c96ce:	8b f0                	mov    esi,eax
100c96d0:	83 c4 10             	add    esp,0x10
100c96d3:	89 b5 d8 fb ff ff    	mov    DWORD PTR [ebp-0x428],esi
100c96d9:	8d 42 01             	lea    eax,[edx+0x1]
100c96dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c96e0:	8a 0a                	mov    cl,BYTE PTR [edx]
100c96e2:	42                   	inc    edx
100c96e3:	84 c9                	test   cl,cl
100c96e5:	75 f9                	jne    0x100c96e0
100c96e7:	2b d0                	sub    edx,eax
100c96e9:	0f 84 0d 02 00 00    	je     0x100c98fc
100c96ef:	90                   	nop
100c96f0:	33 c0                	xor    eax,eax
100c96f2:	8a 88 a8 31 22 10    	mov    cl,BYTE PTR [eax+0x102231a8]
100c96f8:	8d 40 01             	lea    eax,[eax+0x1]
100c96fb:	88 4c 05 db          	mov    BYTE PTR [ebp+eax*1-0x25],cl
100c96ff:	84 c9                	test   cl,cl
100c9701:	75 ef                	jne    0x100c96f2
100c9703:	56                   	push   esi
100c9704:	33 db                	xor    ebx,ebx
100c9706:	e8 e5 d7 ff ff       	call   0x100c6ef0
100c970b:	83 c4 04             	add    esp,0x4
100c970e:	85 c0                	test   eax,eax
100c9710:	74 52                	je     0x100c9764
100c9712:	56                   	push   esi
100c9713:	e8 c8 d6 ff ff       	call   0x100c6de0
100c9718:	b9 a8 31 22 10       	mov    ecx,0x102231a8
100c971d:	89 85 d8 fb ff ff    	mov    DWORD PTR [ebp-0x428],eax
100c9723:	83 c4 04             	add    esp,0x4
100c9726:	8d 51 01             	lea    edx,[ecx+0x1]
100c9729:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c9730:	8a 01                	mov    al,BYTE PTR [ecx]
100c9732:	41                   	inc    ecx
100c9733:	84 c0                	test   al,al
100c9735:	75 f9                	jne    0x100c9730
100c9737:	2b ca                	sub    ecx,edx
100c9739:	74 29                	je     0x100c9764
100c973b:	bb 01 00 00 00       	mov    ebx,0x1
100c9740:	33 c9                	xor    ecx,ecx
100c9742:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c9746:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100c974d:	00 00 00 
100c9750:	8a 81 a8 31 22 10    	mov    al,BYTE PTR [ecx+0x102231a8]
100c9756:	8d 49 01             	lea    ecx,[ecx+0x1]
100c9759:	88 84 0d db fb ff ff 	mov    BYTE PTR [ebp+ecx*1-0x425],al
100c9760:	84 c0                	test   al,al
100c9762:	75 ec                	jne    0x100c9750
100c9764:	8d 45 dc             	lea    eax,[ebp-0x24]
100c9767:	50                   	push   eax
100c9768:	ff 15 00 31 22 10    	call   DWORD PTR ds:0x10223100
100c976e:	83 c4 04             	add    esp,0x4
100c9771:	85 c0                	test   eax,eax
100c9773:	0f 84 27 01 00 00    	je     0x100c98a0
100c9779:	68 2c 04 00 00       	push   0x42c
100c977e:	e8 66 4a 07 00       	call   0x1013e1e9
100c9783:	8b f8                	mov    edi,eax
100c9785:	8d 55 dc             	lea    edx,[ebp-0x24]
100c9788:	8b c2                	mov    eax,edx
100c978a:	8b cf                	mov    ecx,edi
100c978c:	83 c4 04             	add    esp,0x4
100c978f:	2b c8                	sub    ecx,eax
100c9791:	8d 41 04             	lea    eax,[ecx+0x4]
100c9794:	8a 0a                	mov    cl,BYTE PTR [edx]
100c9796:	8d 52 01             	lea    edx,[edx+0x1]
100c9799:	88 4c 10 ff          	mov    BYTE PTR [eax+edx*1-0x1],cl
100c979d:	84 c9                	test   cl,cl
100c979f:	75 f3                	jne    0x100c9794
100c97a1:	68 00 04 00 00       	push   0x400
100c97a6:	8d 77 2c             	lea    esi,[edi+0x2c]
100c97a9:	c7 47 24 00 00 00 00 	mov    DWORD PTR [edi+0x24],0x0
100c97b0:	6a 00                	push   0x0
100c97b2:	56                   	push   esi
100c97b3:	c7 47 28 00 00 00 00 	mov    DWORD PTR [edi+0x28],0x0
100c97ba:	e8 d1 5c 07 00       	call   0x1013f490
100c97bf:	83 c4 0c             	add    esp,0xc
100c97c2:	85 db                	test   ebx,ebx
100c97c4:	0f 84 c8 00 00 00    	je     0x100c9892
100c97ca:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c97d0:	68 2c 65 1d 10       	push   0x101d652c
100c97d5:	50                   	push   eax
100c97d6:	ff 15 f4 30 22 10    	call   DWORD PTR ds:0x102230f4
100c97dc:	83 c4 08             	add    esp,0x8
100c97df:	85 c0                	test   eax,eax
100c97e1:	74 2c                	je     0x100c980f
100c97e3:	80 38 00             	cmp    BYTE PTR [eax],0x0
100c97e6:	74 27                	je     0x100c980f
100c97e8:	50                   	push   eax
100c97e9:	e8 70 1d 0a 00       	call   0x1016b55e
100c97ee:	33 c9                	xor    ecx,ecx
100c97f0:	83 c4 04             	add    esp,0x4
100c97f3:	85 c0                	test   eax,eax
100c97f5:	0f 4e c1             	cmovle eax,ecx
100c97f8:	89 47 24             	mov    DWORD PTR [edi+0x24],eax
100c97fb:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100c9801:	8b 89 90 00 00 00    	mov    ecx,DWORD PTR [ecx+0x90]
100c9807:	3b c1                	cmp    eax,ecx
100c9809:	0f 4c c8             	cmovl  ecx,eax
100c980c:	89 4f 24             	mov    DWORD PTR [edi+0x24],ecx
100c980f:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c9815:	68 38 65 1d 10       	push   0x101d6538
100c981a:	50                   	push   eax
100c981b:	ff 15 f4 30 22 10    	call   DWORD PTR ds:0x102230f4
100c9821:	83 c4 08             	add    esp,0x8
100c9824:	85 c0                	test   eax,eax
100c9826:	74 2c                	je     0x100c9854
100c9828:	80 38 00             	cmp    BYTE PTR [eax],0x0
100c982b:	74 27                	je     0x100c9854
100c982d:	50                   	push   eax
100c982e:	e8 2b 1d 0a 00       	call   0x1016b55e
100c9833:	33 c9                	xor    ecx,ecx
100c9835:	83 c4 04             	add    esp,0x4
100c9838:	85 c0                	test   eax,eax
100c983a:	0f 4e c1             	cmovle eax,ecx
100c983d:	89 47 28             	mov    DWORD PTR [edi+0x28],eax
100c9840:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100c9846:	8b 89 90 00 00 00    	mov    ecx,DWORD PTR [ecx+0x90]
100c984c:	3b c1                	cmp    eax,ecx
100c984e:	0f 4c c8             	cmovl  ecx,eax
100c9851:	89 4f 28             	mov    DWORD PTR [edi+0x28],ecx
100c9854:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c985a:	68 2c 65 1d 10       	push   0x101d652c
100c985f:	50                   	push   eax
100c9860:	ff 15 20 31 22 10    	call   DWORD PTR ds:0x10223120
100c9866:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c986c:	68 38 65 1d 10       	push   0x101d6538
100c9871:	50                   	push   eax
100c9872:	ff 15 20 31 22 10    	call   DWORD PTR ds:0x10223120
100c9878:	8d 8d dc fb ff ff    	lea    ecx,[ebp-0x424]
100c987e:	83 c4 10             	add    esp,0x10
100c9881:	8b c1                	mov    eax,ecx
100c9883:	2b f0                	sub    esi,eax
100c9885:	8a 01                	mov    al,BYTE PTR [ecx]
100c9887:	8d 49 01             	lea    ecx,[ecx+0x1]
100c988a:	88 44 0e ff          	mov    BYTE PTR [esi+ecx*1-0x1],al
100c988e:	84 c0                	test   al,al
100c9890:	75 f3                	jne    0x100c9885
100c9892:	8b 8d d0 fb ff ff    	mov    ecx,DWORD PTR [ebp-0x430]
100c9898:	8b 01                	mov    eax,DWORD PTR [ecx]
100c989a:	89 07                	mov    DWORD PTR [edi],eax
100c989c:	89 39                	mov    DWORD PTR [ecx],edi
100c989e:	eb 14                	jmp    0x100c98b4
100c98a0:	8d 45 dc             	lea    eax,[ebp-0x24]
100c98a3:	50                   	push   eax
100c98a4:	68 44 65 1d 10       	push   0x101d6544
100c98a9:	6a 01                	push   0x1
100c98ab:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c98b1:	83 c4 0c             	add    esp,0xc
100c98b4:	68 00 04 00 00       	push   0x400
100c98b9:	8d 85 dc fb ff ff    	lea    eax,[ebp-0x424]
100c98bf:	6a 00                	push   0x0
100c98c1:	50                   	push   eax
100c98c2:	e8 c9 5b 07 00       	call   0x1013f490
100c98c7:	ff b5 d8 fb ff ff    	push   DWORD PTR [ebp-0x428]
100c98cd:	e8 0e d5 ff ff       	call   0x100c6de0
100c98d2:	b9 a8 31 22 10       	mov    ecx,0x102231a8
100c98d7:	89 85 d8 fb ff ff    	mov    DWORD PTR [ebp-0x428],eax
100c98dd:	83 c4 10             	add    esp,0x10
100c98e0:	8b f0                	mov    esi,eax
100c98e2:	8d 51 01             	lea    edx,[ecx+0x1]
100c98e5:	8a 01                	mov    al,BYTE PTR [ecx]
100c98e7:	41                   	inc    ecx
100c98e8:	84 c0                	test   al,al
100c98ea:	75 f9                	jne    0x100c98e5
100c98ec:	2b ca                	sub    ecx,edx
100c98ee:	0f 85 fc fd ff ff    	jne    0x100c96f0
100c98f4:	8b bd d0 fb ff ff    	mov    edi,DWORD PTR [ebp-0x430]
100c98fa:	33 db                	xor    ebx,ebx
100c98fc:	ff b5 c8 fb ff ff    	push   DWORD PTR [ebp-0x438]
100c9902:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100c9908:	83 c4 04             	add    esp,0x4
100c990b:	8b 0f                	mov    ecx,DWORD PTR [edi]
100c990d:	85 c9                	test   ecx,ecx
100c990f:	74 0c                	je     0x100c991d
100c9911:	8b 01                	mov    eax,DWORD PTR [ecx]
100c9913:	89 19                	mov    DWORD PTR [ecx],ebx
100c9915:	8b d9                	mov    ebx,ecx
100c9917:	8b c8                	mov    ecx,eax
100c9919:	85 c0                	test   eax,eax
100c991b:	75 f4                	jne    0x100c9911
100c991d:	89 1f                	mov    DWORD PTR [edi],ebx
100c991f:	8b d3                	mov    edx,ebx
100c9921:	85 db                	test   ebx,ebx
100c9923:	75 13                	jne    0x100c9938
100c9925:	5f                   	pop    edi
100c9926:	5e                   	pop    esi
100c9927:	33 c0                	xor    eax,eax
100c9929:	5b                   	pop    ebx
100c992a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c992d:	33 cd                	xor    ecx,ebp
100c992f:	e8 7f 42 07 00       	call   0x1013dbb3
100c9934:	8b e5                	mov    esp,ebp
100c9936:	5d                   	pop    ebp
100c9937:	c3                   	ret
100c9938:	8b 0b                	mov    ecx,DWORD PTR [ebx]
100c993a:	85 c9                	test   ecx,ecx
100c993c:	74 0c                	je     0x100c994a
100c993e:	66 90                	xchg   ax,ax
100c9940:	8b 01                	mov    eax,DWORD PTR [ecx]
100c9942:	8b d1                	mov    edx,ecx
100c9944:	8b c8                	mov    ecx,eax
100c9946:	85 c0                	test   eax,eax
100c9948:	75 f6                	jne    0x100c9940
100c994a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c994d:	b8 01 00 00 00       	mov    eax,0x1
100c9952:	89 1a                	mov    DWORD PTR [edx],ebx
100c9954:	33 cd                	xor    ecx,ebp
100c9956:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
100c9959:	5f                   	pop    edi
100c995a:	5e                   	pop    esi
100c995b:	5b                   	pop    ebx
100c995c:	e8 52 42 07 00       	call   0x1013dbb3
100c9961:	8b e5                	mov    esp,ebp
100c9963:	5d                   	pop    ebp
100c9964:	c3                   	ret
