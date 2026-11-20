
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e04d0 <.text+0xdf4d0>:
100e04d0:	55                   	push   ebp
100e04d1:	8b ec                	mov    ebp,esp
100e04d3:	81 ec 94 00 00 00    	sub    esp,0x94
100e04d9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e04de:	33 c5                	xor    eax,ebp
100e04e0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e04e3:	53                   	push   ebx
100e04e4:	56                   	push   esi
100e04e5:	57                   	push   edi
100e04e6:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100e04e9:	8b d9                	mov    ebx,ecx
100e04eb:	89 9d 74 ff ff ff    	mov    DWORD PTR [ebp-0x8c],ebx
100e04f1:	85 ff                	test   edi,edi
100e04f3:	0f 84 c4 00 00 00    	je     0x100e05bd
100e04f9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e04ff:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
100e0502:	85 c9                	test   ecx,ecx
100e0504:	0f 84 c9 00 00 00    	je     0x100e05d3
100e050a:	8b 01                	mov    eax,DWORD PTR [ecx]
100e050c:	56                   	push   esi
100e050d:	57                   	push   edi
100e050e:	53                   	push   ebx
100e050f:	ff 90 a8 00 00 00    	call   DWORD PTR [eax+0xa8]
100e0515:	85 c0                	test   eax,eax
100e0517:	0f 85 b6 00 00 00    	jne    0x100e05d3
100e051d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e0520:	8b 80 84 01 00 00    	mov    eax,DWORD PTR [eax+0x184]
100e0526:	0b 83 b4 22 00 00    	or     eax,DWORD PTR [ebx+0x22b4]
100e052c:	0b 83 b0 22 00 00    	or     eax,DWORD PTR [ebx+0x22b0]
100e0532:	a8 20                	test   al,0x20
100e0534:	0f 84 83 00 00 00    	je     0x100e05bd
100e053a:	81 ff 38 be 1b 10    	cmp    edi,0x101bbe38
100e0540:	75 1b                	jne    0x100e055d
100e0542:	0f 10 05 94 ba 1d 10 	movups xmm0,XMMWORD PTR ds:0x101dba94
100e0549:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100e0550:	0f 10 05 a4 ba 1d 10 	movups xmm0,XMMWORD PTR ds:0x101dbaa4
100e0557:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100e055b:	eb 4c                	jmp    0x100e05a9
100e055d:	81 ff b4 ba 1d 10    	cmp    edi,0x101dbab4
100e0563:	75 2f                	jne    0x100e0594
100e0565:	0f 10 05 bc ba 1d 10 	movups xmm0,XMMWORD PTR ds:0x101dbabc
100e056c:	a1 d4 ba 1d 10       	mov    eax,ds:0x101dbad4
100e0571:	89 45 94             	mov    DWORD PTR [ebp-0x6c],eax
100e0574:	66 a1 d8 ba 1d 10    	mov    ax,ds:0x101dbad8
100e057a:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100e0581:	66 89 45 98          	mov    WORD PTR [ebp-0x68],ax
100e0585:	f3 0f 7e 05 cc ba 1d 	movq   xmm0,QWORD PTR ds:0x101dbacc
100e058c:	10 
100e058d:	66 0f d6 45 8c       	movq   QWORD PTR [ebp-0x74],xmm0
100e0592:	eb 15                	jmp    0x100e05a9
100e0594:	57                   	push   edi
100e0595:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e059b:	68 dc ba 1d 10       	push   0x101dbadc
100e05a0:	50                   	push   eax
100e05a1:	e8 ba eb f3 ff       	call   0x1001f160
100e05a6:	83 c4 0c             	add    esp,0xc
100e05a9:	6a 00                	push   0x0
100e05ab:	6a 02                	push   0x2
100e05ad:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e05b3:	50                   	push   eax
100e05b4:	53                   	push   ebx
100e05b5:	e8 56 92 03 00       	call   0x10119810
100e05ba:	83 c4 10             	add    esp,0x10
100e05bd:	83 c8 ff             	or     eax,0xffffffff
100e05c0:	5f                   	pop    edi
100e05c1:	5e                   	pop    esi
100e05c2:	5b                   	pop    ebx
100e05c3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e05c6:	33 cd                	xor    ecx,ebp
100e05c8:	e8 e6 d5 05 00       	call   0x1013dbb3
100e05cd:	8b e5                	mov    esp,ebp
100e05cf:	5d                   	pop    ebp
100e05d0:	c2 10 00             	ret    0x10
100e05d3:	57                   	push   edi
100e05d4:	e8 87 f8 ff ff       	call   0x100dfe60
100e05d9:	83 c4 04             	add    esp,0x4
100e05dc:	89 85 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],eax
100e05e2:	83 f8 1f             	cmp    eax,0x1f
100e05e5:	77 d6                	ja     0x100e05bd
100e05e7:	2b b4 83 40 25 00 00 	sub    esi,DWORD PTR [ebx+eax*4+0x2540]
100e05ee:	39 75 08             	cmp    DWORD PTR [ebp+0x8],esi
100e05f1:	0f 4c 75 08          	cmovl  esi,DWORD PTR [ebp+0x8]
100e05f5:	83 fe 01             	cmp    esi,0x1
100e05f8:	7c c6                	jl     0x100e05c0
100e05fa:	80 7d 14 00          	cmp    BYTE PTR [ebp+0x14],0x0
100e05fe:	0f 85 ec 00 00 00    	jne    0x100e06f0
100e0604:	81 ff e0 91 1b 10    	cmp    edi,0x101b91e0
100e060a:	75 1a                	jne    0x100e0626
100e060c:	56                   	push   esi
100e060d:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e0613:	68 fc ba 1d 10       	push   0x101dbafc
100e0618:	50                   	push   eax
100e0619:	e8 42 eb f3 ff       	call   0x1001f160
100e061e:	83 c4 0c             	add    esp,0xc
100e0621:	e9 a8 00 00 00       	jmp    0x100e06ce
100e0626:	81 ff 6c 25 1b 10    	cmp    edi,0x101b256c
100e062c:	75 0c                	jne    0x100e063a
100e062e:	56                   	push   esi
100e062f:	57                   	push   edi
100e0630:	68 1c bb 1d 10       	push   0x101dbb1c
100e0635:	e9 85 00 00 00       	jmp    0x100e06bf
100e063a:	81 ff 38 be 1b 10    	cmp    edi,0x101bbe38
100e0640:	75 18                	jne    0x100e065a
100e0642:	0f 10 05 44 bb 1d 10 	movups xmm0,XMMWORD PTR ds:0x101dbb44
100e0649:	a1 54 bb 1d 10       	mov    eax,ds:0x101dbb54
100e064e:	89 45 8c             	mov    DWORD PTR [ebp-0x74],eax
100e0651:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100e0658:	eb 74                	jmp    0x100e06ce
100e065a:	81 ff 7c f1 1a 10    	cmp    edi,0x101af17c
100e0660:	75 1a                	jne    0x100e067c
100e0662:	0f 10 05 58 bb 1d 10 	movups xmm0,XMMWORD PTR ds:0x101dbb58
100e0669:	66 a1 68 bb 1d 10    	mov    ax,ds:0x101dbb68
100e066f:	66 89 45 8c          	mov    WORD PTR [ebp-0x74],ax
100e0673:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100e067a:	eb 52                	jmp    0x100e06ce
100e067c:	56                   	push   esi
100e067d:	81 ff d8 72 1b 10    	cmp    edi,0x101b72d8
100e0683:	75 16                	jne    0x100e069b
100e0685:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e068b:	68 6c bb 1d 10       	push   0x101dbb6c
100e0690:	50                   	push   eax
100e0691:	e8 ca ea f3 ff       	call   0x1001f160
100e0696:	83 c4 0c             	add    esp,0xc
100e0699:	eb 33                	jmp    0x100e06ce
100e069b:	81 ff fc 77 1b 10    	cmp    edi,0x101b77fc
100e06a1:	75 16                	jne    0x100e06b9
100e06a3:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e06a9:	68 94 bb 1d 10       	push   0x101dbb94
100e06ae:	50                   	push   eax
100e06af:	e8 ac ea f3 ff       	call   0x1001f160
100e06b4:	83 c4 0c             	add    esp,0xc
100e06b7:	eb 15                	jmp    0x100e06ce
100e06b9:	57                   	push   edi
100e06ba:	68 b8 bb 1d 10       	push   0x101dbbb8
100e06bf:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e06c5:	50                   	push   eax
100e06c6:	e8 95 ea f3 ff       	call   0x1001f160
100e06cb:	83 c4 10             	add    esp,0x10
100e06ce:	81 ff b0 8c 1a 10    	cmp    edi,0x101a8cb0
100e06d4:	74 14                	je     0x100e06ea
100e06d6:	6a 00                	push   0x0
100e06d8:	6a 02                	push   0x2
100e06da:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e06e0:	50                   	push   eax
100e06e1:	53                   	push   ebx
100e06e2:	e8 29 91 03 00       	call   0x10119810
100e06e7:	83 c4 10             	add    esp,0x10
100e06ea:	8b 85 78 ff ff ff    	mov    eax,DWORD PTR [ebp-0x88]
100e06f0:	01 b4 83 40 25 00 00 	add    DWORD PTR [ebx+eax*4+0x2540],esi
100e06f7:	8b 0d 08 65 22 10    	mov    ecx,DWORD PTR ds:0x10226508
100e06fd:	85 c9                	test   ecx,ecx
100e06ff:	74 38                	je     0x100e0739
100e0701:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e0704:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e070a:	6a 00                	push   0x0
100e070c:	51                   	push   ecx
100e070d:	6a 01                	push   0x1
100e070f:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e0715:	57                   	push   edi
100e0716:	e8 45 f7 ff ff       	call   0x100dfe60
100e071b:	50                   	push   eax
100e071c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e0722:	56                   	push   esi
100e0723:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e0729:	57                   	push   edi
100e072a:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100e0730:	83 c4 20             	add    esp,0x20
100e0733:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e0739:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e073c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e0742:	6a 00                	push   0x0
100e0744:	ff 35 e8 64 22 10    	push   DWORD PTR ds:0x102264e8
100e074a:	6a 01                	push   0x1
100e074c:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e0752:	8b b5 78 ff ff ff    	mov    esi,DWORD PTR [ebp-0x88]
100e0758:	56                   	push   esi
100e0759:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e075f:	ff b4 b3 40 25 00 00 	push   DWORD PTR [ebx+esi*4+0x2540]
100e0766:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100e076c:	83 c4 18             	add    esp,0x18
100e076f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e0775:	8b cb                	mov    ecx,ebx
100e0777:	e8 34 57 01 00       	call   0x100f5eb0
100e077c:	8d 83 14 25 00 00    	lea    eax,[ebx+0x2514]
100e0782:	b9 06 00 00 00       	mov    ecx,0x6
100e0787:	8b 1d b8 65 22 10    	mov    ebx,DWORD PTR ds:0x102265b8
100e078d:	89 85 70 ff ff ff    	mov    DWORD PTR [ebp-0x90],eax
100e0793:	89 8d 6c ff ff ff    	mov    DWORD PTR [ebp-0x94],ecx
100e0799:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e07a0:	8b 30                	mov    esi,DWORD PTR [eax]
100e07a2:	85 f6                	test   esi,esi
100e07a4:	0f 84 cd 00 00 00    	je     0x100e0877
100e07aa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100e07b0:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100e07b7:	8b 80 90 18 23 10    	mov    eax,DWORD PTR [eax+0x10231890]
100e07bd:	85 c0                	test   eax,eax
100e07bf:	0f 84 98 00 00 00    	je     0x100e085d
100e07c5:	8b cf                	mov    ecx,edi
100e07c7:	8a 10                	mov    dl,BYTE PTR [eax]
100e07c9:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e07cb:	75 1a                	jne    0x100e07e7
100e07cd:	84 d2                	test   dl,dl
100e07cf:	74 12                	je     0x100e07e3
100e07d1:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e07d4:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e07d7:	75 0e                	jne    0x100e07e7
100e07d9:	83 c0 02             	add    eax,0x2
100e07dc:	83 c1 02             	add    ecx,0x2
100e07df:	84 d2                	test   dl,dl
100e07e1:	75 e4                	jne    0x100e07c7
100e07e3:	33 c0                	xor    eax,eax
100e07e5:	eb 05                	jmp    0x100e07ec
100e07e7:	1b c0                	sbb    eax,eax
100e07e9:	83 c8 01             	or     eax,0x1
100e07ec:	85 c0                	test   eax,eax
100e07ee:	75 6d                	jne    0x100e085d
100e07f0:	85 db                	test   ebx,ebx
100e07f2:	74 69                	je     0x100e085d
100e07f4:	8b 85 74 ff ff ff    	mov    eax,DWORD PTR [ebp-0x8c]
100e07fa:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e07fd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e0803:	6a 00                	push   0x0
100e0805:	53                   	push   ebx
100e0806:	6a 01                	push   0x1
100e0808:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e080e:	ff b6 68 01 00 00    	push   DWORD PTR [esi+0x168]
100e0814:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e081a:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100e0821:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
100e0827:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e082d:	ff 76 04             	push   DWORD PTR [esi+0x4]
100e0830:	e8 0b 7c f3 ff       	call   0x10018440
100e0835:	8b 8d 74 ff ff ff    	mov    ecx,DWORD PTR [ebp-0x8c]
100e083b:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100e0841:	ff b4 81 40 25 00 00 	push   DWORD PTR [ecx+eax*4+0x2540]
100e0848:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100e084e:	83 c4 20             	add    esp,0x20
100e0851:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e0857:	8b 1d b8 65 22 10    	mov    ebx,DWORD PTR ds:0x102265b8
100e085d:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100e0863:	85 f6                	test   esi,esi
100e0865:	0f 85 45 ff ff ff    	jne    0x100e07b0
100e086b:	8b 85 70 ff ff ff    	mov    eax,DWORD PTR [ebp-0x90]
100e0871:	8b 8d 6c ff ff ff    	mov    ecx,DWORD PTR [ebp-0x94]
100e0877:	83 c0 04             	add    eax,0x4
100e087a:	83 e9 01             	sub    ecx,0x1
100e087d:	89 85 70 ff ff ff    	mov    DWORD PTR [ebp-0x90],eax
100e0883:	89 8d 6c ff ff ff    	mov    DWORD PTR [ebp-0x94],ecx
100e0889:	0f 85 11 ff ff ff    	jne    0x100e07a0
100e088f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e0892:	8b 85 78 ff ff ff    	mov    eax,DWORD PTR [ebp-0x88]
100e0898:	33 cd                	xor    ecx,ebp
100e089a:	5f                   	pop    edi
100e089b:	5e                   	pop    esi
100e089c:	5b                   	pop    ebx
100e089d:	e8 11 d3 05 00       	call   0x1013dbb3
100e08a2:	8b e5                	mov    esp,ebp
100e08a4:	5d                   	pop    ebp
100e08a5:	c2 10 00             	ret    0x10
