
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c0750 <.text+0xbf750>:
100c0750:	55                   	push   ebp
100c0751:	8b ec                	mov    ebp,esp
100c0753:	83 e4 f8             	and    esp,0xfffffff8
100c0756:	83 ec 44             	sub    esp,0x44
100c0759:	53                   	push   ebx
100c075a:	56                   	push   esi
100c075b:	57                   	push   edi
100c075c:	8b f9                	mov    edi,ecx
100c075e:	80 7f 09 00          	cmp    BYTE PTR [edi+0x9],0x0
100c0762:	0f 85 fb 06 00 00    	jne    0x100c0e63
100c0768:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100c076b:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100c0771:	8b 06                	mov    eax,DWORD PTR [esi]
100c0773:	8b 92 98 00 00 00    	mov    edx,DWORD PTR [edx+0x98]
100c0779:	03 c2                	add    eax,edx
100c077b:	ba b4 4e 1d 10       	mov    edx,0x101d4eb4
100c0780:	8b c8                	mov    ecx,eax
100c0782:	8a 19                	mov    bl,BYTE PTR [ecx]
100c0784:	3a 1a                	cmp    bl,BYTE PTR [edx]
100c0786:	75 1a                	jne    0x100c07a2
100c0788:	84 db                	test   bl,bl
100c078a:	74 12                	je     0x100c079e
100c078c:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
100c078f:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
100c0792:	75 0e                	jne    0x100c07a2
100c0794:	83 c1 02             	add    ecx,0x2
100c0797:	83 c2 02             	add    edx,0x2
100c079a:	84 db                	test   bl,bl
100c079c:	75 e4                	jne    0x100c0782
100c079e:	33 c9                	xor    ecx,ecx
100c07a0:	eb 05                	jmp    0x100c07a7
100c07a2:	1b c9                	sbb    ecx,ecx
100c07a4:	83 c9 01             	or     ecx,0x1
100c07a7:	85 c9                	test   ecx,ecx
100c07a9:	0f 84 b4 06 00 00    	je     0x100c0e63
100c07af:	b9 f0 0d 1b 10       	mov    ecx,0x101b0df0
100c07b4:	8a 10                	mov    dl,BYTE PTR [eax]
100c07b6:	3a 11                	cmp    dl,BYTE PTR [ecx]
100c07b8:	75 1a                	jne    0x100c07d4
100c07ba:	84 d2                	test   dl,dl
100c07bc:	74 12                	je     0x100c07d0
100c07be:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100c07c1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100c07c4:	75 0e                	jne    0x100c07d4
100c07c6:	83 c0 02             	add    eax,0x2
100c07c9:	83 c1 02             	add    ecx,0x2
100c07cc:	84 d2                	test   dl,dl
100c07ce:	75 e4                	jne    0x100c07b4
100c07d0:	33 c0                	xor    eax,eax
100c07d2:	eb 05                	jmp    0x100c07d9
100c07d4:	1b c0                	sbb    eax,eax
100c07d6:	83 c8 01             	or     eax,0x1
100c07d9:	85 c0                	test   eax,eax
100c07db:	0f 84 82 06 00 00    	je     0x100c0e63
100c07e1:	68 64 81 1b 10       	push   0x101b8164
100c07e6:	56                   	push   esi
100c07e7:	e8 04 a3 f4 ff       	call   0x1000aaf0
100c07ec:	83 c4 08             	add    esp,0x8
100c07ef:	85 c0                	test   eax,eax
100c07f1:	0f 85 6c 06 00 00    	jne    0x100c0e63
100c07f7:	68 e4 21 1a 10       	push   0x101a21e4
100c07fc:	56                   	push   esi
100c07fd:	e8 ee a2 f4 ff       	call   0x1000aaf0
100c0802:	83 c4 08             	add    esp,0x8
100c0805:	0f 57 c9             	xorps  xmm1,xmm1
100c0808:	85 c0                	test   eax,eax
100c080a:	74 15                	je     0x100c0821
100c080c:	f3 0f 10 86 68 01 00 	movss  xmm0,DWORD PTR [esi+0x168]
100c0813:	00 
100c0814:	0f 2e c1             	ucomiss xmm0,xmm1
100c0817:	9f                   	lahf
100c0818:	f6 c4 44             	test   ah,0x44
100c081b:	0f 8a 42 06 00 00    	jp     0x100c0e63
100c0821:	8b cf                	mov    ecx,edi
100c0823:	e8 08 d7 ff ff       	call   0x100bdf30
100c0828:	85 c0                	test   eax,eax
100c082a:	74 37                	je     0x100c0863
100c082c:	83 bf b8 02 00 00 00 	cmp    DWORD PTR [edi+0x2b8],0x0
100c0833:	74 0b                	je     0x100c0840
100c0835:	8b cf                	mov    ecx,edi
100c0837:	e8 74 d5 ff ff       	call   0x100bddb0
100c083c:	85 c0                	test   eax,eax
100c083e:	75 23                	jne    0x100c0863
100c0840:	68 70 fe 1a 10       	push   0x101afe70
100c0845:	6a 02                	push   0x2
100c0847:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c084d:	83 c4 08             	add    esp,0x8
100c0850:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
100c0857:	00 00 40 
100c085a:	5f                   	pop    edi
100c085b:	5e                   	pop    esi
100c085c:	5b                   	pop    ebx
100c085d:	8b e5                	mov    esp,ebp
100c085f:	5d                   	pop    ebp
100c0860:	c2 04 00             	ret    0x4
100c0863:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0868:	f3 0f 10 87 10 02 00 	movss  xmm0,DWORD PTR [edi+0x210]
100c086f:	00 
100c0870:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
100c0873:	0f 87 ea 05 00 00    	ja     0x100c0e63
100c0879:	8b 9f bc 02 00 00    	mov    ebx,DWORD PTR [edi+0x2bc]
100c087f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
100c0883:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100c0886:	8b c3                	mov    eax,ebx
100c0888:	c1 e0 04             	shl    eax,0x4
100c088b:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100c088f:	f3 0f 10 94 38 38 02 	movss  xmm2,DWORD PTR [eax+edi*1+0x238]
100c0896:	00 00 
100c0898:	f3 0f 10 8c 38 3c 02 	movss  xmm1,DWORD PTR [eax+edi*1+0x23c]
100c089f:	00 00 
100c08a1:	f3 0f 10 84 38 40 02 	movss  xmm0,DWORD PTR [eax+edi*1+0x240]
100c08a8:	00 00 
100c08aa:	8d 44 24 44          	lea    eax,[esp+0x44]
100c08ae:	f3 0f 5c 56 08       	subss  xmm2,DWORD PTR [esi+0x8]
100c08b3:	f3 0f 5c 4e 0c       	subss  xmm1,DWORD PTR [esi+0xc]
100c08b8:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
100c08bd:	50                   	push   eax
100c08be:	f3 0f 11 54 24 30    	movss  DWORD PTR [esp+0x30],xmm2
100c08c4:	f3 0f 11 4c 24 34    	movss  DWORD PTR [esp+0x34],xmm1
100c08ca:	f3 0f 11 44 24 38    	movss  DWORD PTR [esp+0x38],xmm0
100c08d0:	e8 9b 75 f5 ff       	call   0x10017e70
100c08d5:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100c08d9:	66 0f d6 44 24 20    	movq   QWORD PTR [esp+0x20],xmm0
100c08df:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100c08e2:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
100c08e6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100c08ea:	f3 0f 10 84 38 38 02 	movss  xmm0,DWORD PTR [eax+edi*1+0x238]
100c08f1:	00 00 
100c08f3:	0f 28 c8             	movaps xmm1,xmm0
100c08f6:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100c08fc:	f3 0f 10 84 38 3c 02 	movss  xmm0,DWORD PTR [eax+edi*1+0x23c]
100c0903:	00 00 
100c0905:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
100c090a:	f3 0f 5c 46 0c       	subss  xmm0,DWORD PTR [esi+0xc]
100c090f:	f3 0f 59 c9          	mulss  xmm1,xmm1
100c0913:	f3 0f 59 c0          	mulss  xmm0,xmm0
100c0917:	f3 0f 58 c8          	addss  xmm1,xmm0
100c091b:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c091e:	0f 57 c9             	xorps  xmm1,xmm1
100c0921:	66 0f 2e c8          	ucomisd xmm1,xmm0
100c0925:	77 06                	ja     0x100c092d
100c0927:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100c092b:	eb 05                	jmp    0x100c0932
100c092d:	e8 5e b5 0a 00       	call   0x1016be90
100c0932:	83 be 30 01 00 00 00 	cmp    DWORD PTR [esi+0x130],0x0
100c0939:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100c093d:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100c0943:	75 54                	jne    0x100c0999
100c0945:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100c0949:	83 ec 0c             	sub    esp,0xc
100c094c:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
100c0952:	8b cc                	mov    ecx,esp
100c0954:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
100c0958:	8b 84 3a 3c 02 00 00 	mov    eax,DWORD PTR [edx+edi*1+0x23c]
100c095f:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100c0962:	8b 84 3a 40 02 00 00 	mov    eax,DWORD PTR [edx+edi*1+0x240]
100c0969:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100c096c:	8b cf                	mov    ecx,edi
100c096e:	e8 7d f7 ff ff       	call   0x100c00f0
100c0973:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0976:	8b cf                	mov    ecx,edi
100c0978:	8b 17                	mov    edx,DWORD PTR [edi]
100c097a:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
100c0981:	00 
100c0982:	50                   	push   eax
100c0983:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
100c0989:	ff d0                	call   eax
100c098b:	8b 9f bc 02 00 00    	mov    ebx,DWORD PTR [edi+0x2bc]
100c0991:	dd d8                	fstp   st(0)
100c0993:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100c0999:	03 db                	add    ebx,ebx
100c099b:	0f 28 c8             	movaps xmm1,xmm0
100c099e:	f3 0f 5d 0d 28 1f 1a 	minss  xmm1,DWORD PTR ds:0x101a1f28
100c09a5:	10 
100c09a6:	8b 84 df 44 02 00 00 	mov    eax,DWORD PTR [edi+ebx*8+0x244]
100c09ad:	25 7f fe ff ff       	and    eax,0xfffffe7f
100c09b2:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100c09b8:	83 f8 02             	cmp    eax,0x2
100c09bb:	75 15                	jne    0x100c09d2
100c09bd:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c09c3:	e8 c8 6d f5 ff       	call   0x10017790
100c09c8:	f3 0f 10 4c 24 18    	movss  xmm1,DWORD PTR [esp+0x18]
100c09ce:	8b f0                	mov    esi,eax
100c09d0:	eb 1c                	jmp    0x100c09ee
100c09d2:	83 f8 01             	cmp    eax,0x1
100c09d5:	75 15                	jne    0x100c09ec
100c09d7:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
100c09dd:	e8 ae 6d f5 ff       	call   0x10017790
100c09e2:	f3 0f 10 4c 24 18    	movss  xmm1,DWORD PTR [esp+0x18]
100c09e8:	8b f0                	mov    esi,eax
100c09ea:	eb 02                	jmp    0x100c09ee
100c09ec:	33 f6                	xor    esi,esi
100c09ee:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c09f1:	8d 54 24 10          	lea    edx,[esp+0x10]
100c09f5:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100c09fb:	83 c1 08             	add    ecx,0x8
100c09fe:	f3 0f 10 5c 24 24    	movss  xmm3,DWORD PTR [esp+0x24]
100c0a04:	f3 0f 10 64 24 28    	movss  xmm4,DWORD PTR [esp+0x28]
100c0a0a:	8b 07                	mov    eax,DWORD PTR [edi]
100c0a0c:	f3 0f 59 c1          	mulss  xmm0,xmm1
100c0a10:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100c0a17:	00 
100c0a18:	f3 0f 10 11          	movss  xmm2,DWORD PTR [ecx]
100c0a1c:	f3 0f 59 e1          	mulss  xmm4,xmm1
100c0a20:	52                   	push   edx
100c0a21:	f3 0f 59 d9          	mulss  xmm3,xmm1
100c0a25:	f3 0f 58 d0          	addss  xmm2,xmm0
100c0a29:	8d 54 24 30          	lea    edx,[esp+0x30]
100c0a2d:	f3 0f 10 49 04       	movss  xmm1,DWORD PTR [ecx+0x4]
100c0a32:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100c0a37:	56                   	push   esi
100c0a38:	f3 0f 58 cb          	addss  xmm1,xmm3
100c0a3c:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
100c0a42:	f3 0f 58 c4          	addss  xmm0,xmm4
100c0a46:	52                   	push   edx
100c0a47:	51                   	push   ecx
100c0a48:	8b cf                	mov    ecx,edi
100c0a4a:	f3 0f 11 4c 24 40    	movss  DWORD PTR [esp+0x40],xmm1
100c0a50:	f3 0f 11 44 24 44    	movss  DWORD PTR [esp+0x44],xmm0
100c0a56:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100c0a5c:	83 f8 02             	cmp    eax,0x2
100c0a5f:	0f 84 a0 00 00 00    	je     0x100c0b05
100c0a65:	8b 07                	mov    eax,DWORD PTR [edi]
100c0a67:	8b cf                	mov    ecx,edi
100c0a69:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
100c0a6f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0a74:	8b 40 74             	mov    eax,DWORD PTR [eax+0x74]
100c0a77:	85 c0                	test   eax,eax
100c0a79:	0f 85 dc 00 00 00    	jne    0x100c0b5b
100c0a7f:	50                   	push   eax
100c0a80:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100c0a86:	83 c4 04             	add    esp,0x4
100c0a89:	85 c0                	test   eax,eax
100c0a8b:	0f 85 ca 00 00 00    	jne    0x100c0b5b
100c0a91:	33 db                	xor    ebx,ebx
100c0a93:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100c0a99:	8d 44 24 38          	lea    eax,[esp+0x38]
100c0a9d:	8b 17                	mov    edx,DWORD PTR [edi]
100c0a9f:	50                   	push   eax
100c0aa0:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c0aa6:	c1 e0 04             	shl    eax,0x4
100c0aa9:	56                   	push   esi
100c0aaa:	51                   	push   ecx
100c0aab:	05 38 02 00 00       	add    eax,0x238
100c0ab0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c0ab5:	03 c7                	add    eax,edi
100c0ab7:	8b cf                	mov    ecx,edi
100c0ab9:	50                   	push   eax
100c0aba:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0abd:	83 c0 08             	add    eax,0x8
100c0ac0:	50                   	push   eax
100c0ac1:	ff 92 bc 01 00 00    	call   DWORD PTR [edx+0x1bc]
100c0ac7:	8b cf                	mov    ecx,edi
100c0ac9:	85 c0                	test   eax,eax
100c0acb:	0f 84 34 01 00 00    	je     0x100c0c05
100c0ad1:	f3 0f 10 44 24 38    	movss  xmm0,DWORD PTR [esp+0x38]
100c0ad7:	6a 08                	push   0x8
100c0ad9:	83 ec 0c             	sub    esp,0xc
100c0adc:	8b c4                	mov    eax,esp
100c0ade:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c0ae2:	f3 0f 10 44 24 4c    	movss  xmm0,DWORD PTR [esp+0x4c]
100c0ae8:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c0aed:	f3 0f 10 44 24 50    	movss  xmm0,DWORD PTR [esp+0x50]
100c0af3:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c0af8:	e8 c3 ed ff ff       	call   0x100bf8c0
100c0afd:	56                   	push   esi
100c0afe:	8b cf                	mov    ecx,edi
100c0b00:	e8 cb 0f 00 00       	call   0x100c1ad0
100c0b05:	8b 07                	mov    eax,DWORD PTR [edi]
100c0b07:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100c0b0d:	51                   	push   ecx
100c0b0e:	8b cf                	mov    ecx,edi
100c0b10:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c0b15:	ff 90 64 01 00 00    	call   DWORD PTR [eax+0x164]
100c0b1b:	85 c0                	test   eax,eax
100c0b1d:	74 13                	je     0x100c0b32
100c0b1f:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100c0b25:	51                   	push   ecx
100c0b26:	8b cf                	mov    ecx,edi
100c0b28:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c0b2d:	e8 5e b7 ff ff       	call   0x100bc290
100c0b32:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0b37:	f3 0f 10 87 10 02 00 	movss  xmm0,DWORD PTR [edi+0x210]
100c0b3e:	00 
100c0b3f:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
100c0b42:	0f 86 c5 02 00 00    	jbe    0x100c0e0d
100c0b48:	8b 07                	mov    eax,DWORD PTR [edi]
100c0b4a:	8b cf                	mov    ecx,edi
100c0b4c:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
100c0b52:	5f                   	pop    edi
100c0b53:	5e                   	pop    esi
100c0b54:	5b                   	pop    ebx
100c0b55:	8b e5                	mov    esp,ebp
100c0b57:	5d                   	pop    ebp
100c0b58:	c2 04 00             	ret    0x4
100c0b5b:	8b 58 7c             	mov    ebx,DWORD PTR [eax+0x7c]
100c0b5e:	85 db                	test   ebx,ebx
100c0b60:	0f 84 2d ff ff ff    	je     0x100c0a93
100c0b66:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c0b69:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c0b6f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0b72:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c0b78:	e8 03 5f f5 ff       	call   0x10016a80
100c0b7d:	f3 0f 10 87 c0 02 00 	movss  xmm0,DWORD PTR [edi+0x2c0]
100c0b84:	00 
100c0b85:	0f 57 c9             	xorps  xmm1,xmm1
100c0b88:	83 c4 08             	add    esp,0x8
100c0b8b:	0f 2f c1             	comiss xmm0,xmm1
100c0b8e:	0f 86 ff fe ff ff    	jbe    0x100c0a93
100c0b94:	8b 03                	mov    eax,DWORD PTR [ebx]
100c0b96:	8b cb                	mov    ecx,ebx
100c0b98:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
100c0b9e:	85 c0                	test   eax,eax
100c0ba0:	0f 84 ed fe ff ff    	je     0x100c0a93
100c0ba6:	8b 03                	mov    eax,DWORD PTR [ebx]
100c0ba8:	8b cb                	mov    ecx,ebx
100c0baa:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100c0bb0:	85 c0                	test   eax,eax
100c0bb2:	0f 85 db fe ff ff    	jne    0x100c0a93
100c0bb8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0bbd:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100c0bc1:	0f 28 c1             	movaps xmm0,xmm1
100c0bc4:	f3 0f 5c 87 10 02 00 	subss  xmm0,DWORD PTR [edi+0x210]
100c0bcb:	00 
100c0bcc:	0f 2f 05 a0 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1ea0
100c0bd3:	0f 86 ba fe ff ff    	jbe    0x100c0a93
100c0bd9:	f3 0f 10 87 f0 00 00 	movss  xmm0,DWORD PTR [edi+0xf0]
100c0be0:	00 
100c0be1:	0f 2f 44 24 10       	comiss xmm0,DWORD PTR [esp+0x10]
100c0be6:	0f 86 19 ff ff ff    	jbe    0x100c0b05
100c0bec:	f3 0f 58 8f c0 02 00 	addss  xmm1,DWORD PTR [edi+0x2c0]
100c0bf3:	00 
100c0bf4:	f3 0f 11 8f 10 02 00 	movss  DWORD PTR [edi+0x210],xmm1
100c0bfb:	00 
100c0bfc:	5f                   	pop    edi
100c0bfd:	5e                   	pop    esi
100c0bfe:	5b                   	pop    ebx
100c0bff:	8b e5                	mov    esp,ebp
100c0c01:	5d                   	pop    ebp
100c0c02:	c2 04 00             	ret    0x4
100c0c05:	8b 07                	mov    eax,DWORD PTR [edi]
100c0c07:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
100c0c0d:	f3 0f 10 87 c0 02 00 	movss  xmm0,DWORD PTR [edi+0x2c0]
100c0c14:	00 
100c0c15:	0f 57 c9             	xorps  xmm1,xmm1
100c0c18:	0f 2f c1             	comiss xmm0,xmm1
100c0c1b:	76 71                	jbe    0x100c0c8e
100c0c1d:	f6 87 ec 02 00 00 20 	test   BYTE PTR [edi+0x2ec],0x20
100c0c24:	75 68                	jne    0x100c0c8e
100c0c26:	8b cf                	mov    ecx,edi
100c0c28:	e8 83 d1 ff ff       	call   0x100bddb0
100c0c2d:	8b cf                	mov    ecx,edi
100c0c2f:	e8 fc d2 ff ff       	call   0x100bdf30
100c0c34:	85 c0                	test   eax,eax
100c0c36:	0f 85 14 fc ff ff    	jne    0x100c0850
100c0c3c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0c41:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c0c45:	f3 0f 5c 87 10 02 00 	subss  xmm0,DWORD PTR [edi+0x210]
100c0c4c:	00 
100c0c4d:	0f 5a c8             	cvtps2pd xmm1,xmm0
100c0c50:	f2 0f 10 05 10 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e10
100c0c57:	10 
100c0c58:	66 0f 2f c1          	comisd xmm0,xmm1
100c0c5c:	76 0c                	jbe    0x100c0c6a
100c0c5e:	83 8f ec 02 00 00 20 	or     DWORD PTR [edi+0x2ec],0x20
100c0c65:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0c6a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c0c6e:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c0c71:	f2 0f 58 05 f8 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df8
100c0c78:	10 
100c0c79:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100c0c7d:	f3 0f 11 87 10 02 00 	movss  DWORD PTR [edi+0x210],xmm0
100c0c84:	00 
100c0c85:	5f                   	pop    edi
100c0c86:	5e                   	pop    esi
100c0c87:	5b                   	pop    ebx
100c0c88:	8b e5                	mov    esp,ebp
100c0c8a:	5d                   	pop    ebp
100c0c8b:	c2 04 00             	ret    0x4
100c0c8e:	8b 87 ec 02 00 00    	mov    eax,DWORD PTR [edi+0x2ec]
100c0c94:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
100c0c9b:	00 00 40 
100c0c9e:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c0ca1:	c1 e8 05             	shr    eax,0x5
100c0ca4:	83 e0 01             	and    eax,0x1
100c0ca7:	50                   	push   eax
100c0ca8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0cad:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c0cb3:	03 01                	add    eax,DWORD PTR [ecx]
100c0cb5:	50                   	push   eax
100c0cb6:	68 c8 4e 1d 10       	push   0x101d4ec8
100c0cbb:	6a 02                	push   0x2
100c0cbd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c0cc3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0cc6:	83 c4 10             	add    esp,0x10
100c0cc9:	ba 4c 8e 1a 10       	mov    edx,0x101a8e4c
100c0cce:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100c0cd4:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100c0cda:	f7 d9                	neg    ecx
100c0cdc:	1b c9                	sbb    ecx,ecx
100c0cde:	23 c8                	and    ecx,eax
100c0ce0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0ce5:	8b 09                	mov    ecx,DWORD PTR [ecx]
100c0ce7:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c0ced:	0f 1f 00             	nop    DWORD PTR [eax]
100c0cf0:	8a 01                	mov    al,BYTE PTR [ecx]
100c0cf2:	3a 02                	cmp    al,BYTE PTR [edx]
100c0cf4:	75 1a                	jne    0x100c0d10
100c0cf6:	84 c0                	test   al,al
100c0cf8:	74 12                	je     0x100c0d0c
100c0cfa:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c0cfd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100c0d00:	75 0e                	jne    0x100c0d10
100c0d02:	83 c1 02             	add    ecx,0x2
100c0d05:	83 c2 02             	add    edx,0x2
100c0d08:	84 c0                	test   al,al
100c0d0a:	75 e4                	jne    0x100c0cf0
100c0d0c:	33 c0                	xor    eax,eax
100c0d0e:	eb 05                	jmp    0x100c0d15
100c0d10:	1b c0                	sbb    eax,eax
100c0d12:	83 c8 01             	or     eax,0x1
100c0d15:	85 c0                	test   eax,eax
100c0d17:	0f 85 ce 00 00 00    	jne    0x100c0deb
100c0d1d:	8b 03                	mov    eax,DWORD PTR [ebx]
100c0d1f:	8b cb                	mov    ecx,ebx
100c0d21:	ff 50 78             	call   DWORD PTR [eax+0x78]
100c0d24:	8b f0                	mov    esi,eax
100c0d26:	85 f6                	test   esi,esi
100c0d28:	0f 84 bd 00 00 00    	je     0x100c0deb
100c0d2e:	3b f7                	cmp    esi,edi
100c0d30:	0f 84 b5 00 00 00    	je     0x100c0deb
100c0d36:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c0d39:	ba e4 21 1a 10       	mov    edx,0x101a21e4
100c0d3e:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
100c0d44:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100c0d4a:	f7 d9                	neg    ecx
100c0d4c:	1b c9                	sbb    ecx,ecx
100c0d4e:	23 c8                	and    ecx,eax
100c0d50:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0d55:	8b 09                	mov    ecx,DWORD PTR [ecx]
100c0d57:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c0d5d:	0f 1f 00             	nop    DWORD PTR [eax]
100c0d60:	8a 01                	mov    al,BYTE PTR [ecx]
100c0d62:	3a 02                	cmp    al,BYTE PTR [edx]
100c0d64:	75 1a                	jne    0x100c0d80
100c0d66:	84 c0                	test   al,al
100c0d68:	74 12                	je     0x100c0d7c
100c0d6a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c0d6d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100c0d70:	75 0e                	jne    0x100c0d80
100c0d72:	83 c1 02             	add    ecx,0x2
100c0d75:	83 c2 02             	add    edx,0x2
100c0d78:	84 c0                	test   al,al
100c0d7a:	75 e4                	jne    0x100c0d60
100c0d7c:	33 c0                	xor    eax,eax
100c0d7e:	eb 05                	jmp    0x100c0d85
100c0d80:	1b c0                	sbb    eax,eax
100c0d82:	83 c8 01             	or     eax,0x1
100c0d85:	85 c0                	test   eax,eax
100c0d87:	74 62                	je     0x100c0deb
100c0d89:	8b 06                	mov    eax,DWORD PTR [esi]
100c0d8b:	8b ce                	mov    ecx,esi
100c0d8d:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100c0d93:	85 c0                	test   eax,eax
100c0d95:	74 54                	je     0x100c0deb
100c0d97:	8b 06                	mov    eax,DWORD PTR [esi]
100c0d99:	8b ce                	mov    ecx,esi
100c0d9b:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100c0da1:	85 c0                	test   eax,eax
100c0da3:	75 46                	jne    0x100c0deb
100c0da5:	38 86 fc 01 00 00    	cmp    BYTE PTR [esi+0x1fc],al
100c0dab:	75 3e                	jne    0x100c0deb
100c0dad:	8b 07                	mov    eax,DWORD PTR [edi]
100c0daf:	8b cf                	mov    ecx,edi
100c0db1:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
100c0db7:	8b cf                	mov    ecx,edi
100c0db9:	e8 b2 0c 00 00       	call   0x100c1a70
100c0dbe:	8b 07                	mov    eax,DWORD PTR [edi]
100c0dc0:	8b cf                	mov    ecx,edi
100c0dc2:	6a 16                	push   0x16
100c0dc4:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
100c0dca:	50                   	push   eax
100c0dcb:	8b cf                	mov    ecx,edi
100c0dcd:	e8 7e 9c f4 ff       	call   0x1000aa50
100c0dd2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0dd5:	8b ce                	mov    ecx,esi
100c0dd7:	6a 01                	push   0x1
100c0dd9:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
100c0de0:	00 00 00 
100c0de3:	8b 06                	mov    eax,DWORD PTR [esi]
100c0de5:	ff 76 04             	push   DWORD PTR [esi+0x4]
100c0de8:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
100c0deb:	8b 03                	mov    eax,DWORD PTR [ebx]
100c0ded:	8b cb                	mov    ecx,ebx
100c0def:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100c0df5:	85 c0                	test   eax,eax
100c0df7:	74 6a                	je     0x100c0e63
100c0df9:	8b 07                	mov    eax,DWORD PTR [edi]
100c0dfb:	8b cf                	mov    ecx,edi
100c0dfd:	53                   	push   ebx
100c0dfe:	ff 90 3c 02 00 00    	call   DWORD PTR [eax+0x23c]
100c0e04:	5f                   	pop    edi
100c0e05:	5e                   	pop    esi
100c0e06:	5b                   	pop    ebx
100c0e07:	8b e5                	mov    esp,ebp
100c0e09:	5d                   	pop    ebp
100c0e0a:	c2 04 00             	ret    0x4
100c0e0d:	f3 0f 10 9f f0 00 00 	movss  xmm3,DWORD PTR [edi+0xf0]
100c0e14:	00 
100c0e15:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100c0e1a:	0f 28 c3             	movaps xmm0,xmm3
100c0e1d:	f3 0f 10 54 24 18    	movss  xmm2,DWORD PTR [esp+0x18]
100c0e23:	f3 0f 59 c1          	mulss  xmm0,xmm1
100c0e27:	0f 2f c2             	comiss xmm0,xmm2
100c0e2a:	76 07                	jbe    0x100c0e33
100c0e2c:	0f 28 ca             	movaps xmm1,xmm2
100c0e2f:	f3 0f 5e cb          	divss  xmm1,xmm3
100c0e33:	8b 07                	mov    eax,DWORD PTR [edi]
100c0e35:	51                   	push   ecx
100c0e36:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100c0e3b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
100c0e3f:	51                   	push   ecx
100c0e40:	56                   	push   esi
100c0e41:	8b cf                	mov    ecx,edi
100c0e43:	ff 90 60 01 00 00    	call   DWORD PTR [eax+0x160]
100c0e49:	83 bf b8 02 00 00 00 	cmp    DWORD PTR [edi+0x2b8],0x0
100c0e50:	75 11                	jne    0x100c0e63
100c0e52:	8b 07                	mov    eax,DWORD PTR [edi]
100c0e54:	8b cf                	mov    ecx,edi
100c0e56:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
100c0e5c:	8b cf                	mov    ecx,edi
100c0e5e:	e8 0d 0c 00 00       	call   0x100c1a70
100c0e63:	5f                   	pop    edi
100c0e64:	5e                   	pop    esi
100c0e65:	5b                   	pop    ebx
100c0e66:	8b e5                	mov    esp,ebp
100c0e68:	5d                   	pop    ebp
100c0e69:	c2 04 00             	ret    0x4
