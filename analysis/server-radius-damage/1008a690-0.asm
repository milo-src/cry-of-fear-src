
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a690 <.text+0x89690>:
1008a690:	55                   	push   ebp
1008a691:	8b ec                	mov    ebp,esp
1008a693:	83 e4 f8             	and    esp,0xfffffff8
1008a696:	f3 0f 10 4d 20       	movss  xmm1,DWORD PTR [ebp+0x20]
1008a69b:	83 ec 6c             	sub    esp,0x6c
1008a69e:	f3 0f 10 55 1c       	movss  xmm2,DWORD PTR [ebp+0x1c]
1008a6a3:	0f 57 c0             	xorps  xmm0,xmm0
1008a6a6:	0f 2e c8             	ucomiss xmm1,xmm0
1008a6a9:	53                   	push   ebx
1008a6aa:	56                   	push   esi
1008a6ab:	57                   	push   edi
1008a6ac:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008a6b3:	10 
1008a6b4:	9f                   	lahf
1008a6b5:	f6 c4 44             	test   ah,0x44
1008a6b8:	7b 07                	jnp    0x1008a6c1
1008a6ba:	0f 28 c2             	movaps xmm0,xmm2
1008a6bd:	f3 0f 5e c1          	divss  xmm0,xmm1
1008a6c1:	8d 45 08             	lea    eax,[ebp+0x8]
1008a6c4:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1008a6ca:	50                   	push   eax
1008a6cb:	e8 b0 f0 08 00       	call   0x10119780
1008a6d0:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008a6d5:	33 c9                	xor    ecx,ecx
1008a6d7:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1008a6de:	10 
1008a6df:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1008a6e2:	83 f8 fd             	cmp    eax,0xfffffffd
1008a6e5:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
1008a6e8:	8b df                	mov    ebx,edi
1008a6ea:	0f 94 c1             	sete   cl
1008a6ed:	85 c0                	test   eax,eax
1008a6ef:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1008a6f3:	f3 0f 11 45 10       	movss  DWORD PTR [ebp+0x10],xmm0
1008a6f8:	0f 45 d8             	cmovne ebx,eax
1008a6fb:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
1008a700:	8d 45 08             	lea    eax,[ebp+0x8]
1008a703:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008a708:	50                   	push   eax
1008a709:	6a 00                	push   0x0
1008a70b:	e8 a0 df 08 00       	call   0x101186b0
1008a710:	8b f0                	mov    esi,eax
1008a712:	83 c4 0c             	add    esp,0xc
1008a715:	85 f6                	test   esi,esi
1008a717:	0f 84 bc 02 00 00    	je     0x1008a9d9
1008a71d:	0f 1f 00             	nop    DWORD PTR [eax]
1008a720:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008a723:	f3 0f 10 81 70 01 00 	movss  xmm0,DWORD PTR [ecx+0x170]
1008a72a:	00 
1008a72b:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008a732:	9f                   	lahf
1008a733:	f6 c4 44             	test   ah,0x44
1008a736:	0f 8b 7b 02 00 00    	jnp    0x1008a9b7
1008a73c:	f6 81 a4 01 00 00 40 	test   BYTE PTR [ecx+0x1a4],0x40
1008a743:	74 2f                	je     0x1008a774
1008a745:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
1008a74b:	85 c0                	test   eax,eax
1008a74d:	75 12                	jne    0x1008a761
1008a74f:	50                   	push   eax
1008a750:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1008a756:	83 c4 04             	add    esp,0x4
1008a759:	85 c0                	test   eax,eax
1008a75b:	75 04                	jne    0x1008a761
1008a75d:	33 c9                	xor    ecx,ecx
1008a75f:	eb 03                	jmp    0x1008a764
1008a761:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1008a764:	8b 01                	mov    eax,DWORD PTR [ecx]
1008a766:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008a76c:	85 c0                	test   eax,eax
1008a76e:	0f 85 43 02 00 00    	jne    0x1008a9b7
1008a774:	83 7d 24 00          	cmp    DWORD PTR [ebp+0x24],0x0
1008a778:	74 10                	je     0x1008a78a
1008a77a:	8b 06                	mov    eax,DWORD PTR [esi]
1008a77c:	8b ce                	mov    ecx,esi
1008a77e:	ff 50 50             	call   DWORD PTR [eax+0x50]
1008a781:	3b 45 24             	cmp    eax,DWORD PTR [ebp+0x24]
1008a784:	0f 84 2d 02 00 00    	je     0x1008a9b7
1008a78a:	83 7c 24 14 00       	cmp    DWORD PTR [esp+0x14],0x0
1008a78f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a792:	74 09                	je     0x1008a79d
1008a794:	83 b8 c4 01 00 00 00 	cmp    DWORD PTR [eax+0x1c4],0x0
1008a79b:	eb 07                	jmp    0x1008a7a4
1008a79d:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
1008a7a4:	0f 84 0d 02 00 00    	je     0x1008a9b7
1008a7aa:	8b 06                	mov    eax,DWORD PTR [esi]
1008a7ac:	8d 4d 08             	lea    ecx,[ebp+0x8]
1008a7af:	51                   	push   ecx
1008a7b0:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1008a7b4:	51                   	push   ecx
1008a7b5:	8b ce                	mov    ecx,esi
1008a7b7:	ff 90 08 01 00 00    	call   DWORD PTR [eax+0x108]
1008a7bd:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008a7c1:	66 0f d6 44 24 28    	movq   QWORD PTR [esp+0x28],xmm0
1008a7c7:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1008a7ca:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008a7ce:	8d 44 24 40          	lea    eax,[esp+0x40]
1008a7d2:	50                   	push   eax
1008a7d3:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
1008a7d9:	8d 44 24 30          	lea    eax,[esp+0x30]
1008a7dd:	6a 00                	push   0x0
1008a7df:	50                   	push   eax
1008a7e0:	8d 45 08             	lea    eax,[ebp+0x8]
1008a7e3:	50                   	push   eax
1008a7e4:	e8 17 00 09 00       	call   0x1011a800
1008a7e9:	f3 0f 10 44 24 64    	movss  xmm0,DWORD PTR [esp+0x64]
1008a7ef:	83 c4 14             	add    esp,0x14
1008a7f2:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1008a7f9:	9f                   	lahf
1008a7fa:	f6 c4 44             	test   ah,0x44
1008a7fd:	7b 13                	jnp    0x1008a812
1008a7ff:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008a802:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
1008a806:	3b 81 0c 02 00 00    	cmp    eax,DWORD PTR [ecx+0x20c]
1008a80c:	0f 85 a5 01 00 00    	jne    0x1008a9b7
1008a812:	83 7c 24 44 00       	cmp    DWORD PTR [esp+0x44],0x0
1008a817:	74 1b                	je     0x1008a834
1008a819:	f3 0f 7e 45 08       	movq   xmm0,QWORD PTR [ebp+0x8]
1008a81e:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1008a821:	66 0f d6 44 24 54    	movq   QWORD PTR [esp+0x54],xmm0
1008a827:	0f 57 c0             	xorps  xmm0,xmm0
1008a82a:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
1008a82e:	f3 0f 11 44 24 50    	movss  DWORD PTR [esp+0x50],xmm0
1008a834:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1008a839:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
1008a83e:	f3 0f 5c 54 24 58    	subss  xmm2,DWORD PTR [esp+0x58]
1008a844:	f3 0f 5c 4c 24 54    	subss  xmm1,DWORD PTR [esp+0x54]
1008a84a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008a84f:	f3 0f 5c 44 24 5c    	subss  xmm0,DWORD PTR [esp+0x5c]
1008a855:	f3 0f 59 d2          	mulss  xmm2,xmm2
1008a859:	f3 0f 59 c9          	mulss  xmm1,xmm1
1008a85d:	f3 0f 59 c0          	mulss  xmm0,xmm0
1008a861:	f3 0f 58 d1          	addss  xmm2,xmm1
1008a865:	0f 57 c9             	xorps  xmm1,xmm1
1008a868:	f3 0f 58 d0          	addss  xmm2,xmm0
1008a86c:	0f 5a c2             	cvtps2pd xmm0,xmm2
1008a86f:	66 0f 2e c8          	ucomisd xmm1,xmm0
1008a873:	77 06                	ja     0x1008a87b
1008a875:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1008a879:	eb 05                	jmp    0x1008a880
1008a87b:	e8 10 16 0e 00       	call   0x1016be90
1008a880:	f3 0f 10 4d 1c       	movss  xmm1,DWORD PTR [ebp+0x1c]
1008a885:	0f 57 d2             	xorps  xmm2,xmm2
1008a888:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1008a88c:	f3 0f 59 44 24 10    	mulss  xmm0,DWORD PTR [esp+0x10]
1008a892:	f3 0f 5c c8          	subss  xmm1,xmm0
1008a896:	f3 0f 10 44 24 50    	movss  xmm0,DWORD PTR [esp+0x50]
1008a89c:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1008a8a3:	f3 0f 5f d1          	maxss  xmm2,xmm1
1008a8a7:	9f                   	lahf
1008a8a8:	f3 0f 11 54 24 24    	movss  DWORD PTR [esp+0x24],xmm2
1008a8ae:	f6 c4 44             	test   ah,0x44
1008a8b1:	0f 8b ee 00 00 00    	jnp    0x1008a9a5
1008a8b7:	e8 b4 17 09 00       	call   0x1011c070
1008a8bc:	f3 0f 10 44 24 58    	movss  xmm0,DWORD PTR [esp+0x58]
1008a8c2:	8d 44 24 40          	lea    eax,[esp+0x40]
1008a8c6:	f3 0f 5c 45 0c       	subss  xmm0,DWORD PTR [ebp+0xc]
1008a8cb:	f3 0f 10 54 24 54    	movss  xmm2,DWORD PTR [esp+0x54]
1008a8d1:	f3 0f 5c 55 08       	subss  xmm2,DWORD PTR [ebp+0x8]
1008a8d6:	f3 0f 10 5c 24 5c    	movss  xmm3,DWORD PTR [esp+0x5c]
1008a8dc:	f3 0f 5c 5d 10       	subss  xmm3,DWORD PTR [ebp+0x10]
1008a8e1:	ff 75 28             	push   DWORD PTR [ebp+0x28]
1008a8e4:	0f 28 c8             	movaps xmm1,xmm0
1008a8e7:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
1008a8ed:	f3 0f 59 c8          	mulss  xmm1,xmm0
1008a8f1:	0f 28 c2             	movaps xmm0,xmm2
1008a8f4:	50                   	push   eax
1008a8f5:	f3 0f 59 c2          	mulss  xmm0,xmm2
1008a8f9:	83 ec 0c             	sub    esp,0xc
1008a8fc:	8b fc                	mov    edi,esp
1008a8fe:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
1008a904:	f3 0f 11 5c 24 2c    	movss  DWORD PTR [esp+0x2c],xmm3
1008a90a:	f3 0f 58 c8          	addss  xmm1,xmm0
1008a90e:	0f 28 c3             	movaps xmm0,xmm3
1008a911:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008a915:	f3 0f 58 c8          	addss  xmm1,xmm0
1008a919:	0f 5a c1             	cvtps2pd xmm0,xmm1
1008a91c:	0f 57 c9             	xorps  xmm1,xmm1
1008a91f:	66 0f 2e c8          	ucomisd xmm1,xmm0
1008a923:	77 06                	ja     0x1008a92b
1008a925:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1008a929:	eb 05                	jmp    0x1008a930
1008a92b:	e8 60 15 0e 00       	call   0x1016be90
1008a930:	0f 57 c9             	xorps  xmm1,xmm1
1008a933:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1008a937:	0f 57 c0             	xorps  xmm0,xmm0
1008a93a:	0f 2e c8             	ucomiss xmm1,xmm0
1008a93d:	9f                   	lahf
1008a93e:	f6 c4 44             	test   ah,0x44
1008a941:	7a 0d                	jp     0x1008a950
1008a943:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
1008a94a:	10 
1008a94b:	0f 57 d2             	xorps  xmm2,xmm2
1008a94e:	eb 24                	jmp    0x1008a974
1008a950:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008a957:	10 
1008a958:	f3 0f 5e c1          	divss  xmm0,xmm1
1008a95c:	0f 28 c8             	movaps xmm1,xmm0
1008a95f:	0f 28 d0             	movaps xmm2,xmm0
1008a962:	f3 0f 59 4c 24 2c    	mulss  xmm1,DWORD PTR [esp+0x2c]
1008a968:	f3 0f 59 54 24 30    	mulss  xmm2,DWORD PTR [esp+0x30]
1008a96e:	f3 0f 59 44 24 34    	mulss  xmm0,DWORD PTR [esp+0x34]
1008a974:	f3 0f 11 07          	movss  DWORD PTR [edi],xmm0
1008a978:	f3 0f 10 44 24 38    	movss  xmm0,DWORD PTR [esp+0x38]
1008a97e:	f3 0f 11 57 04       	movss  DWORD PTR [edi+0x4],xmm2
1008a983:	f3 0f 11 4f 08       	movss  DWORD PTR [edi+0x8],xmm1
1008a988:	8b 06                	mov    eax,DWORD PTR [esi]
1008a98a:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1008a98d:	51                   	push   ecx
1008a98e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008a993:	8b ce                	mov    ecx,esi
1008a995:	57                   	push   edi
1008a996:	ff 50 60             	call   DWORD PTR [eax+0x60]
1008a999:	53                   	push   ebx
1008a99a:	57                   	push   edi
1008a99b:	e8 50 0f 09 00       	call   0x1011b8f0
1008a9a0:	83 c4 08             	add    esp,0x8
1008a9a3:	eb 12                	jmp    0x1008a9b7
1008a9a5:	ff 75 28             	push   DWORD PTR [ebp+0x28]
1008a9a8:	8b 06                	mov    eax,DWORD PTR [esi]
1008a9aa:	51                   	push   ecx
1008a9ab:	f3 0f 11 14 24       	movss  DWORD PTR [esp],xmm2
1008a9b0:	8b ce                	mov    ecx,esi
1008a9b2:	53                   	push   ebx
1008a9b3:	57                   	push   edi
1008a9b4:	ff 50 64             	call   DWORD PTR [eax+0x64]
1008a9b7:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
1008a9bc:	8d 45 08             	lea    eax,[ebp+0x8]
1008a9bf:	51                   	push   ecx
1008a9c0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008a9c5:	50                   	push   eax
1008a9c6:	56                   	push   esi
1008a9c7:	e8 e4 dc 08 00       	call   0x101186b0
1008a9cc:	8b f0                	mov    esi,eax
1008a9ce:	83 c4 0c             	add    esp,0xc
1008a9d1:	85 f6                	test   esi,esi
1008a9d3:	0f 85 47 fd ff ff    	jne    0x1008a720
1008a9d9:	5f                   	pop    edi
1008a9da:	5e                   	pop    esi
1008a9db:	5b                   	pop    ebx
1008a9dc:	8b e5                	mov    esp,ebp
1008a9de:	5d                   	pop    ebp
1008a9df:	c3                   	ret
