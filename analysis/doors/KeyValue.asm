
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048550 <.text+0x47550>:
10048550:	55                   	push   ebp
10048551:	8b ec                	mov    ebp,esp
10048553:	53                   	push   ebx
10048554:	56                   	push   esi
10048555:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10048558:	8b d9                	mov    ebx,ecx
1004855a:	57                   	push   edi
1004855b:	ba e4 0b 1b 10       	mov    edx,0x101b0be4
10048560:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
10048563:	8b c7                	mov    eax,edi
10048565:	8a 08                	mov    cl,BYTE PTR [eax]
10048567:	3a 0a                	cmp    cl,BYTE PTR [edx]
10048569:	75 1a                	jne    0x10048585
1004856b:	84 c9                	test   cl,cl
1004856d:	74 12                	je     0x10048581
1004856f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10048572:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10048575:	75 0e                	jne    0x10048585
10048577:	83 c0 02             	add    eax,0x2
1004857a:	83 c2 02             	add    edx,0x2
1004857d:	84 c9                	test   cl,cl
1004857f:	75 e4                	jne    0x10048565
10048581:	33 c0                	xor    eax,eax
10048583:	eb 05                	jmp    0x1004858a
10048585:	1b c0                	sbb    eax,eax
10048587:	83 c8 01             	or     eax,0x1
1004858a:	85 c0                	test   eax,eax
1004858c:	75 23                	jne    0x100485b1
1004858e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10048591:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048597:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004859a:	83 c4 04             	add    esp,0x4
1004859d:	5f                   	pop    edi
1004859e:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
100485a4:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100485ab:	5e                   	pop    esi
100485ac:	5b                   	pop    ebx
100485ad:	5d                   	pop    ebp
100485ae:	c2 04 00             	ret    0x4
100485b1:	b9 f0 0b 1b 10       	mov    ecx,0x101b0bf0
100485b6:	8b c7                	mov    eax,edi
100485b8:	8a 10                	mov    dl,BYTE PTR [eax]
100485ba:	3a 11                	cmp    dl,BYTE PTR [ecx]
100485bc:	75 1a                	jne    0x100485d8
100485be:	84 d2                	test   dl,dl
100485c0:	74 12                	je     0x100485d4
100485c2:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100485c5:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100485c8:	75 0e                	jne    0x100485d8
100485ca:	83 c0 02             	add    eax,0x2
100485cd:	83 c1 02             	add    ecx,0x2
100485d0:	84 d2                	test   dl,dl
100485d2:	75 e4                	jne    0x100485b8
100485d4:	33 c0                	xor    eax,eax
100485d6:	eb 05                	jmp    0x100485dd
100485d8:	1b c0                	sbb    eax,eax
100485da:	83 c8 01             	or     eax,0x1
100485dd:	85 c0                	test   eax,eax
100485df:	75 23                	jne    0x10048604
100485e1:	ff 76 08             	push   DWORD PTR [esi+0x8]
100485e4:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100485ea:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100485ed:	83 c4 04             	add    esp,0x4
100485f0:	5f                   	pop    edi
100485f1:	89 81 f0 01 00 00    	mov    DWORD PTR [ecx+0x1f0],eax
100485f7:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100485fe:	5e                   	pop    esi
100485ff:	5b                   	pop    ebx
10048600:	5d                   	pop    ebp
10048601:	c2 04 00             	ret    0x4
10048604:	b9 fc 0b 1b 10       	mov    ecx,0x101b0bfc
10048609:	8b c7                	mov    eax,edi
1004860b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10048610:	8a 10                	mov    dl,BYTE PTR [eax]
10048612:	3a 11                	cmp    dl,BYTE PTR [ecx]
10048614:	75 1a                	jne    0x10048630
10048616:	84 d2                	test   dl,dl
10048618:	74 12                	je     0x1004862c
1004861a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1004861d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10048620:	75 0e                	jne    0x10048630
10048622:	83 c0 02             	add    eax,0x2
10048625:	83 c1 02             	add    ecx,0x2
10048628:	84 d2                	test   dl,dl
1004862a:	75 e4                	jne    0x10048610
1004862c:	33 c0                	xor    eax,eax
1004862e:	eb 05                	jmp    0x10048635
10048630:	1b c0                	sbb    eax,eax
10048632:	83 c8 01             	or     eax,0x1
10048635:	85 c0                	test   eax,eax
10048637:	75 20                	jne    0x10048659
10048639:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004863c:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048642:	83 c4 04             	add    esp,0x4
10048645:	89 83 8c 01 00 00    	mov    DWORD PTR [ebx+0x18c],eax
1004864b:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048652:	5f                   	pop    edi
10048653:	5e                   	pop    esi
10048654:	5b                   	pop    ebx
10048655:	5d                   	pop    ebp
10048656:	c2 04 00             	ret    0x4
10048659:	68 44 57 1a 10       	push   0x101a5744
1004865e:	57                   	push   edi
1004865f:	e8 3c 25 fc ff       	call   0x1000aba0
10048664:	83 c4 08             	add    esp,0x8
10048667:	85 c0                	test   eax,eax
10048669:	74 20                	je     0x1004868b
1004866b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004866e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048674:	83 c4 04             	add    esp,0x4
10048677:	89 83 90 01 00 00    	mov    DWORD PTR [ebx+0x190],eax
1004867d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048684:	5f                   	pop    edi
10048685:	5e                   	pop    esi
10048686:	5b                   	pop    ebx
10048687:	5d                   	pop    ebp
10048688:	c2 04 00             	ret    0x4
1004868b:	68 50 57 1a 10       	push   0x101a5750
10048690:	57                   	push   edi
10048691:	e8 0a 25 fc ff       	call   0x1000aba0
10048696:	83 c4 08             	add    esp,0x8
10048699:	85 c0                	test   eax,eax
1004869b:	74 20                	je     0x100486bd
1004869d:	ff 76 08             	push   DWORD PTR [esi+0x8]
100486a0:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100486a6:	83 c4 04             	add    esp,0x4
100486a9:	89 83 94 01 00 00    	mov    DWORD PTR [ebx+0x194],eax
100486af:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100486b6:	5f                   	pop    edi
100486b7:	5e                   	pop    esi
100486b8:	5b                   	pop    ebx
100486b9:	5d                   	pop    ebp
100486ba:	c2 04 00             	ret    0x4
100486bd:	68 5c 57 1a 10       	push   0x101a575c
100486c2:	57                   	push   edi
100486c3:	e8 d8 24 fc ff       	call   0x1000aba0
100486c8:	83 c4 08             	add    esp,0x8
100486cb:	85 c0                	test   eax,eax
100486cd:	74 23                	je     0x100486f2
100486cf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100486d2:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100486d8:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100486db:	83 c4 04             	add    esp,0x4
100486de:	5f                   	pop    edi
100486df:	89 81 f4 01 00 00    	mov    DWORD PTR [ecx+0x1f4],eax
100486e5:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100486ec:	5e                   	pop    esi
100486ed:	5b                   	pop    ebx
100486ee:	5d                   	pop    ebp
100486ef:	c2 04 00             	ret    0x4
100486f2:	68 68 57 1a 10       	push   0x101a5768
100486f7:	57                   	push   edi
100486f8:	e8 a3 24 fc ff       	call   0x1000aba0
100486fd:	83 c4 08             	add    esp,0x8
10048700:	85 c0                	test   eax,eax
10048702:	74 23                	je     0x10048727
10048704:	ff 76 08             	push   DWORD PTR [esi+0x8]
10048707:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1004870d:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10048710:	83 c4 04             	add    esp,0x4
10048713:	5f                   	pop    edi
10048714:	89 81 f8 01 00 00    	mov    DWORD PTR [ecx+0x1f8],eax
1004871a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048721:	5e                   	pop    esi
10048722:	5b                   	pop    ebx
10048723:	5d                   	pop    ebp
10048724:	c2 04 00             	ret    0x4
10048727:	68 74 57 1a 10       	push   0x101a5774
1004872c:	57                   	push   edi
1004872d:	e8 6e 24 fc ff       	call   0x1000aba0
10048732:	83 c4 08             	add    esp,0x8
10048735:	85 c0                	test   eax,eax
10048737:	74 20                	je     0x10048759
10048739:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004873c:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048742:	83 c4 04             	add    esp,0x4
10048745:	89 83 98 01 00 00    	mov    DWORD PTR [ebx+0x198],eax
1004874b:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048752:	5f                   	pop    edi
10048753:	5e                   	pop    esi
10048754:	5b                   	pop    ebx
10048755:	5d                   	pop    ebp
10048756:	c2 04 00             	ret    0x4
10048759:	68 80 57 1a 10       	push   0x101a5780
1004875e:	57                   	push   edi
1004875f:	e8 3c 24 fc ff       	call   0x1000aba0
10048764:	83 c4 08             	add    esp,0x8
10048767:	85 c0                	test   eax,eax
10048769:	74 20                	je     0x1004878b
1004876b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004876e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048774:	83 c4 04             	add    esp,0x4
10048777:	89 83 9c 01 00 00    	mov    DWORD PTR [ebx+0x19c],eax
1004877d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048784:	5f                   	pop    edi
10048785:	5e                   	pop    esi
10048786:	5b                   	pop    ebx
10048787:	5d                   	pop    ebp
10048788:	c2 04 00             	ret    0x4
1004878b:	68 04 0c 1b 10       	push   0x101b0c04
10048790:	57                   	push   edi
10048791:	e8 0a 24 fc ff       	call   0x1000aba0
10048796:	83 c4 08             	add    esp,0x8
10048799:	85 c0                	test   eax,eax
1004879b:	74 20                	je     0x100487bd
1004879d:	ff 76 08             	push   DWORD PTR [esi+0x8]
100487a0:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100487a6:	83 c4 04             	add    esp,0x4
100487a9:	89 83 a0 01 00 00    	mov    DWORD PTR [ebx+0x1a0],eax
100487af:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100487b6:	5f                   	pop    edi
100487b7:	5e                   	pop    esi
100487b8:	5b                   	pop    ebx
100487b9:	5d                   	pop    ebp
100487ba:	c2 04 00             	ret    0x4
100487bd:	68 10 0c 1b 10       	push   0x101b0c10
100487c2:	57                   	push   edi
100487c3:	e8 d8 23 fc ff       	call   0x1000aba0
100487c8:	83 c4 08             	add    esp,0x8
100487cb:	85 c0                	test   eax,eax
100487cd:	74 1f                	je     0x100487ee
100487cf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100487d2:	e8 15 6e 12 00       	call   0x1016f5ec
100487d7:	83 c4 04             	add    esp,0x4
100487da:	d9 9b ac 01 00 00    	fstp   DWORD PTR [ebx+0x1ac]
100487e0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100487e7:	5f                   	pop    edi
100487e8:	5e                   	pop    esi
100487e9:	5b                   	pop    ebx
100487ea:	5d                   	pop    ebp
100487eb:	c2 04 00             	ret    0x4
100487ee:	68 1c 0c 1b 10       	push   0x101b0c1c
100487f3:	57                   	push   edi
100487f4:	e8 a7 23 fc ff       	call   0x1000aba0
100487f9:	83 c4 08             	add    esp,0x8
100487fc:	85 c0                	test   eax,eax
100487fe:	74 1f                	je     0x1004881f
10048800:	ff 76 08             	push   DWORD PTR [esi+0x8]
10048803:	e8 e4 6d 12 00       	call   0x1016f5ec
10048808:	83 c4 04             	add    esp,0x4
1004880b:	d9 9b a8 01 00 00    	fstp   DWORD PTR [ebx+0x1a8]
10048811:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048818:	5f                   	pop    edi
10048819:	5e                   	pop    esi
1004881a:	5b                   	pop    ebx
1004881b:	5d                   	pop    ebp
1004881c:	c2 04 00             	ret    0x4
1004881f:	68 2c 0c 1b 10       	push   0x101b0c2c
10048824:	57                   	push   edi
10048825:	e8 76 23 fc ff       	call   0x1000aba0
1004882a:	83 c4 08             	add    esp,0x8
1004882d:	85 c0                	test   eax,eax
1004882f:	74 24                	je     0x10048855
10048831:	ff 76 08             	push   DWORD PTR [esi+0x8]
10048834:	e8 25 2d 12 00       	call   0x1016b55e
10048839:	83 c4 04             	add    esp,0x4
1004883c:	85 c0                	test   eax,eax
1004883e:	0f 95 c0             	setne  al
10048841:	88 83 88 01 00 00    	mov    BYTE PTR [ebx+0x188],al
10048847:	5f                   	pop    edi
10048848:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1004884f:	5e                   	pop    esi
10048850:	5b                   	pop    ebx
10048851:	5d                   	pop    ebp
10048852:	c2 04 00             	ret    0x4
10048855:	68 38 0c 1b 10       	push   0x101b0c38
1004885a:	57                   	push   edi
1004885b:	e8 40 23 fc ff       	call   0x1000aba0
10048860:	83 c4 08             	add    esp,0x8
10048863:	85 c0                	test   eax,eax
10048865:	74 20                	je     0x10048887
10048867:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004886a:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10048870:	83 c4 04             	add    esp,0x4
10048873:	89 83 84 01 00 00    	mov    DWORD PTR [ebx+0x184],eax
10048879:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10048880:	5f                   	pop    edi
10048881:	5e                   	pop    esi
10048882:	5b                   	pop    ebx
10048883:	5d                   	pop    ebp
10048884:	c2 04 00             	ret    0x4
10048887:	56                   	push   esi
10048888:	8b cb                	mov    ecx,ebx
1004888a:	e8 f1 9b 0b 00       	call   0x10102480
1004888f:	5f                   	pop    edi
10048890:	5e                   	pop    esi
10048891:	5b                   	pop    ebx
10048892:	5d                   	pop    ebp
10048893:	c2 04 00             	ret    0x4
10048896:	cc                   	int3
10048897:	cc                   	int3
10048898:	cc                   	int3
10048899:	cc                   	int3
1004889a:	cc                   	int3
1004889b:	cc                   	int3
1004889c:	cc                   	int3
1004889d:	cc                   	int3
1004889e:	cc                   	int3
1004889f:	cc                   	int3
