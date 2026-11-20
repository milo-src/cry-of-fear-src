
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cb740 <.text+0xca740>:
100cb740:	55                   	push   ebp
100cb741:	8b ec                	mov    ebp,esp
100cb743:	83 ec 24             	sub    esp,0x24
100cb746:	57                   	push   edi
100cb747:	8b f9                	mov    edi,ecx
100cb749:	89 7d ec             	mov    DWORD PTR [ebp-0x14],edi
100cb74c:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb74f:	85 c0                	test   eax,eax
100cb751:	74 09                	je     0x100cb75c
100cb753:	50                   	push   eax
100cb754:	e8 78 5d 0a 00       	call   0x101714d1
100cb759:	83 c4 04             	add    esp,0x4
100cb75c:	ff 77 18             	push   DWORD PTR [edi+0x18]
100cb75f:	6a 10                	push   0x10
100cb761:	e8 d0 5d 0a 00       	call   0x10171536
100cb766:	83 c4 08             	add    esp,0x8
100cb769:	89 47 24             	mov    DWORD PTR [edi+0x24],eax
100cb76c:	85 c0                	test   eax,eax
100cb76e:	75 15                	jne    0x100cb785
100cb770:	68 08 74 1d 10       	push   0x101d7408
100cb775:	6a 02                	push   0x2
100cb777:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cb77d:	83 c4 08             	add    esp,0x8
100cb780:	5f                   	pop    edi
100cb781:	8b e5                	mov    esp,ebp
100cb783:	5d                   	pop    ebp
100cb784:	c3                   	ret
100cb785:	53                   	push   ebx
100cb786:	56                   	push   esi
100cb787:	c7 87 64 18 00 00 28 	mov    DWORD PTR [edi+0x1864],0x4e6e6b28
100cb78e:	6b 6e 4e 
100cb791:	33 d2                	xor    edx,edx
100cb793:	c7 87 70 18 00 00 28 	mov    DWORD PTR [edi+0x1870],0xce6e6b28
100cb79a:	6b 6e ce 
100cb79d:	c7 87 68 18 00 00 28 	mov    DWORD PTR [edi+0x1868],0x4e6e6b28
100cb7a4:	6b 6e 4e 
100cb7a7:	c7 87 74 18 00 00 28 	mov    DWORD PTR [edi+0x1874],0xce6e6b28
100cb7ae:	6b 6e ce 
100cb7b1:	c7 87 6c 18 00 00 28 	mov    DWORD PTR [edi+0x186c],0x4e6e6b28
100cb7b8:	6b 6e 4e 
100cb7bb:	c7 87 78 18 00 00 28 	mov    DWORD PTR [edi+0x1878],0xce6e6b28
100cb7c2:	6b 6e ce 
100cb7c5:	8b 77 18             	mov    esi,DWORD PTR [edi+0x18]
100cb7c8:	85 f6                	test   esi,esi
100cb7ca:	0f 8e 4b 01 00 00    	jle    0x100cb91b
100cb7d0:	33 c0                	xor    eax,eax
100cb7d2:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cb7d6:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100cb7dd:	00 00 00 
100cb7e0:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
100cb7e3:	f3 0f 10 87 64 18 00 	movss  xmm0,DWORD PTR [edi+0x1864]
100cb7ea:	00 
100cb7eb:	f3 0f 10 0c 08       	movss  xmm1,DWORD PTR [eax+ecx*1]
100cb7f0:	0f 2f c1             	comiss xmm0,xmm1
100cb7f3:	76 08                	jbe    0x100cb7fd
100cb7f5:	f3 0f 11 8f 64 18 00 	movss  DWORD PTR [edi+0x1864],xmm1
100cb7fc:	00 
100cb7fd:	f3 0f 10 4c 08 04    	movss  xmm1,DWORD PTR [eax+ecx*1+0x4]
100cb803:	f3 0f 10 87 68 18 00 	movss  xmm0,DWORD PTR [edi+0x1868]
100cb80a:	00 
100cb80b:	0f 2f c1             	comiss xmm0,xmm1
100cb80e:	76 08                	jbe    0x100cb818
100cb810:	f3 0f 11 8f 68 18 00 	movss  DWORD PTR [edi+0x1868],xmm1
100cb817:	00 
100cb818:	f3 0f 10 4c 08 08    	movss  xmm1,DWORD PTR [eax+ecx*1+0x8]
100cb81e:	f3 0f 10 87 6c 18 00 	movss  xmm0,DWORD PTR [edi+0x186c]
100cb825:	00 
100cb826:	0f 2f c1             	comiss xmm0,xmm1
100cb829:	76 08                	jbe    0x100cb833
100cb82b:	f3 0f 11 8f 6c 18 00 	movss  DWORD PTR [edi+0x186c],xmm1
100cb832:	00 
100cb833:	f3 0f 10 04 08       	movss  xmm0,DWORD PTR [eax+ecx*1]
100cb838:	0f 2f 87 70 18 00 00 	comiss xmm0,DWORD PTR [edi+0x1870]
100cb83f:	76 08                	jbe    0x100cb849
100cb841:	f3 0f 11 87 70 18 00 	movss  DWORD PTR [edi+0x1870],xmm0
100cb848:	00 
100cb849:	f3 0f 10 44 08 04    	movss  xmm0,DWORD PTR [eax+ecx*1+0x4]
100cb84f:	0f 2f 87 74 18 00 00 	comiss xmm0,DWORD PTR [edi+0x1874]
100cb856:	76 08                	jbe    0x100cb860
100cb858:	f3 0f 11 87 74 18 00 	movss  DWORD PTR [edi+0x1874],xmm0
100cb85f:	00 
100cb860:	f3 0f 10 44 08 08    	movss  xmm0,DWORD PTR [eax+ecx*1+0x8]
100cb866:	0f 2f 87 78 18 00 00 	comiss xmm0,DWORD PTR [edi+0x1878]
100cb86d:	76 08                	jbe    0x100cb877
100cb86f:	f3 0f 11 87 78 18 00 	movss  DWORD PTR [edi+0x1878],xmm0
100cb876:	00 
100cb877:	42                   	inc    edx
100cb878:	83 c0 58             	add    eax,0x58
100cb87b:	3b d6                	cmp    edx,esi
100cb87d:	0f 8c 5d ff ff ff    	jl     0x100cb7e0
100cb883:	33 db                	xor    ebx,ebx
100cb885:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
100cb888:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cb88f:	00 
100cb890:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
100cb893:	8d 5b 58             	lea    ebx,[ebx+0x58]
100cb896:	f3 0f 2c 97 64 18 00 	cvttss2si edx,DWORD PTR [edi+0x1864]
100cb89d:	00 
100cb89e:	f3 0f 2c 44 33 a8    	cvttss2si eax,DWORD PTR [ebx+esi*1-0x58]
100cb8a4:	f3 0f 2c 8f 70 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1870]
100cb8ab:	00 
100cb8ac:	2b c2                	sub    eax,edx
100cb8ae:	c1 e0 08             	shl    eax,0x8
100cb8b1:	2b ca                	sub    ecx,edx
100cb8b3:	99                   	cdq
100cb8b4:	41                   	inc    ecx
100cb8b5:	f7 f9                	idiv   ecx
100cb8b7:	88 44 33 c0          	mov    BYTE PTR [ebx+esi*1-0x40],al
100cb8bb:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
100cb8be:	f3 0f 2c 97 68 18 00 	cvttss2si edx,DWORD PTR [edi+0x1868]
100cb8c5:	00 
100cb8c6:	f3 0f 2c 44 33 ac    	cvttss2si eax,DWORD PTR [ebx+esi*1-0x54]
100cb8cc:	f3 0f 2c 8f 74 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1874]
100cb8d3:	00 
100cb8d4:	2b c2                	sub    eax,edx
100cb8d6:	c1 e0 08             	shl    eax,0x8
100cb8d9:	2b ca                	sub    ecx,edx
100cb8db:	99                   	cdq
100cb8dc:	41                   	inc    ecx
100cb8dd:	f7 f9                	idiv   ecx
100cb8df:	88 44 33 c1          	mov    BYTE PTR [ebx+esi*1-0x3f],al
100cb8e3:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
100cb8e6:	f3 0f 2c 97 6c 18 00 	cvttss2si edx,DWORD PTR [edi+0x186c]
100cb8ed:	00 
100cb8ee:	f3 0f 2c 44 33 b0    	cvttss2si eax,DWORD PTR [ebx+esi*1-0x50]
100cb8f4:	f3 0f 2c 8f 78 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1878]
100cb8fb:	00 
100cb8fc:	2b c2                	sub    eax,edx
100cb8fe:	c1 e0 08             	shl    eax,0x8
100cb901:	2b ca                	sub    ecx,edx
100cb903:	99                   	cdq
100cb904:	41                   	inc    ecx
100cb905:	f7 f9                	idiv   ecx
100cb907:	88 44 33 c2          	mov    BYTE PTR [ebx+esi*1-0x3e],al
100cb90b:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100cb90e:	40                   	inc    eax
100cb90f:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100cb912:	3b 47 18             	cmp    eax,DWORD PTR [edi+0x18]
100cb915:	0f 8c 75 ff ff ff    	jl     0x100cb890
100cb91b:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
100cb91e:	33 c0                	xor    eax,eax
100cb920:	8b 55 dc             	mov    edx,DWORD PTR [ebp-0x24]
100cb923:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cb926:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100cb92d:	00 00 00 
100cb930:	c1 e0 0a             	shl    eax,0xa
100cb933:	b9 00 01 00 00       	mov    ecx,0x100
100cb938:	05 28 0c 00 00       	add    eax,0xc28
100cb93d:	03 c7                	add    eax,edi
100cb93f:	90                   	nop
100cb940:	c7 80 00 f4 ff ff ff 	mov    DWORD PTR [eax-0xc00],0xff
100cb947:	00 00 00 
100cb94a:	8d 40 04             	lea    eax,[eax+0x4]
100cb94d:	c7 40 fc 00 00 00 00 	mov    DWORD PTR [eax-0x4],0x0
100cb954:	83 e9 01             	sub    ecx,0x1
100cb957:	75 e7                	jne    0x100cb940
100cb959:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
100cb95c:	33 db                	xor    ebx,ebx
100cb95e:	85 c9                	test   ecx,ecx
100cb960:	7e 23                	jle    0x100cb985
100cb962:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100cb965:	c1 e6 02             	shl    esi,0x2
100cb968:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cb96f:	00 
100cb970:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb973:	8d 76 10             	lea    esi,[esi+0x10]
100cb976:	89 5c 06 f0          	mov    DWORD PTR [esi+eax*1-0x10],ebx
100cb97a:	43                   	inc    ebx
100cb97b:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
100cb97e:	3b d9                	cmp    ebx,ecx
100cb980:	7c ee                	jl     0x100cb970
100cb982:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
100cb985:	8d 41 ff             	lea    eax,[ecx-0x1]
100cb988:	85 c0                	test   eax,eax
100cb98a:	0f 8e 5c 01 00 00    	jle    0x100cbaec
100cb990:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cb993:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
100cb996:	b9 01 00 00 00       	mov    ecx,0x1
100cb99b:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cb99e:	8d 1c 85 00 00 00 00 	lea    ebx,[eax*4+0x0]
100cb9a5:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
100cb9a8:	eb 09                	jmp    0x100cb9b3
100cb9aa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cb9b0:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cb9b3:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb9b6:	89 4d dc             	mov    DWORD PTR [ebp-0x24],ecx
100cb9b9:	8b 04 03             	mov    eax,DWORD PTR [ebx+eax*1]
100cb9bc:	6b c8 58             	imul   ecx,eax,0x58
100cb9bf:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100cb9c2:	0f b6 7c 01 18       	movzx  edi,BYTE PTR [ecx+eax*1+0x18]
100cb9c7:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
100cb9ca:	0f b6 7c 01 19       	movzx  edi,BYTE PTR [ecx+eax*1+0x19]
100cb9cf:	0f b6 4c 01 1a       	movzx  ecx,BYTE PTR [ecx+eax*1+0x1a]
100cb9d4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cb9d7:	83 e8 00             	sub    eax,0x0
100cb9da:	74 28                	je     0x100cba04
100cb9dc:	83 e8 01             	sub    eax,0x1
100cb9df:	74 14                	je     0x100cb9f5
100cb9e1:	83 e8 01             	sub    eax,0x1
100cb9e4:	75 2b                	jne    0x100cba11
100cb9e6:	8b f1                	mov    esi,ecx
100cb9e8:	c1 e6 08             	shl    esi,0x8
100cb9eb:	03 75 f0             	add    esi,DWORD PTR [ebp-0x10]
100cb9ee:	c1 e6 08             	shl    esi,0x8
100cb9f1:	03 f7                	add    esi,edi
100cb9f3:	eb 1c                	jmp    0x100cba11
100cb9f5:	8b f7                	mov    esi,edi
100cb9f7:	c1 e6 08             	shl    esi,0x8
100cb9fa:	03 f1                	add    esi,ecx
100cb9fc:	c1 e6 08             	shl    esi,0x8
100cb9ff:	03 75 f0             	add    esi,DWORD PTR [ebp-0x10]
100cba02:	eb 0d                	jmp    0x100cba11
100cba04:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
100cba07:	c1 e6 08             	shl    esi,0x8
100cba0a:	03 f7                	add    esi,edi
100cba0c:	c1 e6 08             	shl    esi,0x8
100cba0f:	03 f1                	add    esi,ecx
100cba11:	8b 7d f8             	mov    edi,DWORD PTR [ebp-0x8]
100cba14:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
100cba17:	3b f9                	cmp    edi,ecx
100cba19:	89 7d e8             	mov    DWORD PTR [ebp-0x18],edi
100cba1c:	8b 7d ec             	mov    edi,DWORD PTR [ebp-0x14]
100cba1f:	0f 8d ac 00 00 00    	jge    0x100cbad1
100cba25:	83 c3 10             	add    ebx,0x10
100cba28:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cba2f:	00 
100cba30:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cba33:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100cba36:	8b 04 03             	mov    eax,DWORD PTR [ebx+eax*1]
100cba39:	6b c8 58             	imul   ecx,eax,0x58
100cba3c:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
100cba3f:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100cba42:	0f b6 7c 01 18       	movzx  edi,BYTE PTR [ecx+eax*1+0x18]
100cba47:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
100cba4a:	0f b6 7c 01 19       	movzx  edi,BYTE PTR [ecx+eax*1+0x19]
100cba4f:	0f b6 4c 01 1a       	movzx  ecx,BYTE PTR [ecx+eax*1+0x1a]
100cba54:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cba57:	83 e8 00             	sub    eax,0x0
100cba5a:	74 28                	je     0x100cba84
100cba5c:	83 e8 01             	sub    eax,0x1
100cba5f:	74 14                	je     0x100cba75
100cba61:	83 e8 01             	sub    eax,0x1
100cba64:	75 2b                	jne    0x100cba91
100cba66:	8b d1                	mov    edx,ecx
100cba68:	c1 e2 08             	shl    edx,0x8
100cba6b:	03 55 f0             	add    edx,DWORD PTR [ebp-0x10]
100cba6e:	c1 e2 08             	shl    edx,0x8
100cba71:	03 d7                	add    edx,edi
100cba73:	eb 1c                	jmp    0x100cba91
100cba75:	8b d7                	mov    edx,edi
100cba77:	c1 e2 08             	shl    edx,0x8
100cba7a:	03 d1                	add    edx,ecx
100cba7c:	c1 e2 08             	shl    edx,0x8
100cba7f:	03 55 f0             	add    edx,DWORD PTR [ebp-0x10]
100cba82:	eb 0d                	jmp    0x100cba91
100cba84:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
100cba87:	c1 e2 08             	shl    edx,0x8
100cba8a:	03 d7                	add    edx,edi
100cba8c:	c1 e2 08             	shl    edx,0x8
100cba8f:	03 d1                	add    edx,ecx
100cba91:	8b 7d ec             	mov    edi,DWORD PTR [ebp-0x14]
100cba94:	3b d6                	cmp    edx,esi
100cba96:	7d 21                	jge    0x100cbab9
100cba98:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100cba9b:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100cba9e:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100cbaa1:	8b 0c 08             	mov    ecx,DWORD PTR [eax+ecx*1]
100cbaa4:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
100cbaa7:	8b 4d e0             	mov    ecx,DWORD PTR [ebp-0x20]
100cbaaa:	89 0c 38             	mov    DWORD PTR [eax+edi*1],ecx
100cbaad:	8b 7d ec             	mov    edi,DWORD PTR [ebp-0x14]
100cbab0:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
100cbab3:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cbab6:	89 0c 03             	mov    DWORD PTR [ebx+eax*1],ecx
100cbab9:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100cbabc:	83 c3 10             	add    ebx,0x10
100cbabf:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
100cbac2:	40                   	inc    eax
100cbac3:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
100cbac6:	3b c1                	cmp    eax,ecx
100cbac8:	0f 8c 62 ff ff ff    	jl     0x100cba30
100cbace:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
100cbad1:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
100cbad4:	8d 41 ff             	lea    eax,[ecx-0x1]
100cbad7:	83 c3 10             	add    ebx,0x10
100cbada:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
100cbadd:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
100cbae0:	39 45 dc             	cmp    DWORD PTR [ebp-0x24],eax
100cbae3:	0f 8c c7 fe ff ff    	jl     0x100cb9b0
100cbae9:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
100cbaec:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cbaef:	40                   	inc    eax
100cbaf0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cbaf3:	83 f8 03             	cmp    eax,0x3
100cbaf6:	0f 8c 34 fe ff ff    	jl     0x100cb930
100cbafc:	33 f6                	xor    esi,esi
100cbafe:	85 c9                	test   ecx,ecx
100cbb00:	0f 8e a3 00 00 00    	jle    0x100cbba9
100cbb06:	33 db                	xor    ebx,ebx
100cbb08:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
100cbb0b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100cbb10:	8b 57 24             	mov    edx,DWORD PTR [edi+0x24]
100cbb13:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
100cbb16:	6b 04 13 58          	imul   eax,DWORD PTR [ebx+edx*1],0x58
100cbb1a:	0f b6 44 08 18       	movzx  eax,BYTE PTR [eax+ecx*1+0x18]
100cbb1f:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
100cbb22:	6b 44 13 04 58       	imul   eax,DWORD PTR [ebx+edx*1+0x4],0x58
100cbb27:	0f b6 5c 08 19       	movzx  ebx,BYTE PTR [eax+ecx*1+0x19]
100cbb2c:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
100cbb2f:	6b 44 10 08 58       	imul   eax,DWORD PTR [eax+edx*1+0x8],0x58
100cbb34:	0f b6 44 08 1a       	movzx  eax,BYTE PTR [eax+ecx*1+0x1a]
100cbb39:	8b 4d dc             	mov    ecx,DWORD PTR [ebp-0x24]
100cbb3c:	3b 74 8f 28          	cmp    esi,DWORD PTR [edi+ecx*4+0x28]
100cbb40:	7d 04                	jge    0x100cbb46
100cbb42:	89 74 8f 28          	mov    DWORD PTR [edi+ecx*4+0x28],esi
100cbb46:	3b b4 9f 28 04 00 00 	cmp    esi,DWORD PTR [edi+ebx*4+0x428]
100cbb4d:	7d 07                	jge    0x100cbb56
100cbb4f:	89 b4 9f 28 04 00 00 	mov    DWORD PTR [edi+ebx*4+0x428],esi
100cbb56:	3b b4 87 28 08 00 00 	cmp    esi,DWORD PTR [edi+eax*4+0x828]
100cbb5d:	7d 07                	jge    0x100cbb66
100cbb5f:	89 b4 87 28 08 00 00 	mov    DWORD PTR [edi+eax*4+0x828],esi
100cbb66:	39 b4 8f 28 0c 00 00 	cmp    DWORD PTR [edi+ecx*4+0xc28],esi
100cbb6d:	7d 07                	jge    0x100cbb76
100cbb6f:	89 b4 8f 28 0c 00 00 	mov    DWORD PTR [edi+ecx*4+0xc28],esi
100cbb76:	39 b4 9f 28 10 00 00 	cmp    DWORD PTR [edi+ebx*4+0x1028],esi
100cbb7d:	7d 07                	jge    0x100cbb86
100cbb7f:	89 b4 9f 28 10 00 00 	mov    DWORD PTR [edi+ebx*4+0x1028],esi
100cbb86:	39 b4 87 28 14 00 00 	cmp    DWORD PTR [edi+eax*4+0x1428],esi
100cbb8d:	7d 07                	jge    0x100cbb96
100cbb8f:	89 b4 87 28 14 00 00 	mov    DWORD PTR [edi+eax*4+0x1428],esi
100cbb96:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
100cbb99:	46                   	inc    esi
100cbb9a:	83 c3 10             	add    ebx,0x10
100cbb9d:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
100cbba0:	3b 77 18             	cmp    esi,DWORD PTR [edi+0x18]
100cbba3:	0f 8c 67 ff ff ff    	jl     0x100cbb10
100cbba9:	68 00 08 00 00       	push   0x800
100cbbae:	8d 87 7c 18 00 00    	lea    eax,[edi+0x187c]
100cbbb4:	6a 00                	push   0x0
100cbbb6:	50                   	push   eax
100cbbb7:	e8 d4 38 07 00       	call   0x1013f490
100cbbbc:	83 c4 0c             	add    esp,0xc
100cbbbf:	5e                   	pop    esi
100cbbc0:	5b                   	pop    ebx
100cbbc1:	5f                   	pop    edi
100cbbc2:	8b e5                	mov    esp,ebp
100cbbc4:	5d                   	pop    ebp
100cbbc5:	c3                   	ret
