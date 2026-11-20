
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f9790 <.text+0xf8790>:
100f9790:	55                   	push   ebp
100f9791:	8b ec                	mov    ebp,esp
100f9793:	83 ec 68             	sub    esp,0x68
100f9796:	53                   	push   ebx
100f9797:	56                   	push   esi
100f9798:	8b f1                	mov    esi,ecx
100f979a:	57                   	push   edi
100f979b:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100f97a1:	85 c0                	test   eax,eax
100f97a3:	0f 84 24 03 00 00    	je     0x100f9acd
100f97a9:	8b 80 68 01 00 00    	mov    eax,DWORD PTR [eax+0x168]
100f97af:	f3 0f 2c 1d 34 68 22 	cvttss2si ebx,DWORD PTR ds:0x10226834
100f97b6:	10 
100f97b7:	83 f8 03             	cmp    eax,0x3
100f97ba:	74 05                	je     0x100f97c1
100f97bc:	83 f8 0a             	cmp    eax,0xa
100f97bf:	74 51                	je     0x100f9812
100f97c1:	e8 ea c5 ff ff       	call   0x100f5db0
100f97c6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f97c9:	6a 64                	push   0x64
100f97cb:	6a 00                	push   0x0
100f97cd:	83 ec 08             	sub    esp,0x8
100f97d0:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f97d7:	3f 
100f97d8:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f97df:	68 30 8b 1a 10       	push   0x101a8b30
100f97e4:	6a 00                	push   0x0
100f97e6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f97ec:	e8 ff 31 00 00       	call   0x100fc9f0
100f97f1:	83 c4 10             	add    esp,0x10
100f97f4:	8b ce                	mov    ecx,esi
100f97f6:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x41000000
100f97fd:	41 
100f97fe:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100f9805:	3f 
100f9806:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f980d:	e8 9e f9 ff ff       	call   0x100f91b0
100f9812:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9815:	83 c0 74             	add    eax,0x74
100f9818:	50                   	push   eax
100f9819:	e8 02 fb 01 00       	call   0x10119320
100f981e:	8b 06                	mov    eax,DWORD PTR [esi]
100f9820:	8d 4d f4             	lea    ecx,[ebp-0xc]
100f9823:	83 c4 04             	add    esp,0x4
100f9826:	51                   	push   ecx
100f9827:	8b ce                	mov    ecx,esi
100f9829:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
100f982f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f9834:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
100f983b:	10 
100f983c:	f3 0f 10 65 f4       	movss  xmm4,DWORD PTR [ebp-0xc]
100f9841:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
100f9846:	f3 0f 10 50 2c       	movss  xmm2,DWORD PTR [eax+0x2c]
100f984b:	f3 0f 10 58 30       	movss  xmm3,DWORD PTR [eax+0x30]
100f9850:	8d 45 98             	lea    eax,[ebp-0x68]
100f9853:	f3 0f 59 c8          	mulss  xmm1,xmm0
100f9857:	50                   	push   eax
100f9858:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f985b:	f3 0f 59 d0          	mulss  xmm2,xmm0
100f985f:	f3 0f 59 d8          	mulss  xmm3,xmm0
100f9863:	f3 0f 58 e1          	addss  xmm4,xmm1
100f9867:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
100f986c:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100f9871:	f3 0f 58 ca          	addss  xmm1,xmm2
100f9875:	f3 0f 58 c3          	addss  xmm0,xmm3
100f9879:	f3 0f 11 65 e8       	movss  DWORD PTR [ebp-0x18],xmm4
100f987e:	f3 0f 11 4d ec       	movss  DWORD PTR [ebp-0x14],xmm1
100f9883:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f9888:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f988e:	8d 45 e8             	lea    eax,[ebp-0x18]
100f9891:	6a 00                	push   0x0
100f9893:	50                   	push   eax
100f9894:	8d 45 f4             	lea    eax,[ebp-0xc]
100f9897:	50                   	push   eax
100f9898:	e8 63 0f 02 00       	call   0x1011a800
100f989d:	f3 0f 10 4d a8       	movss  xmm1,DWORD PTR [ebp-0x58]
100f98a2:	83 c4 14             	add    esp,0x14
100f98a5:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100f98ac:	10 
100f98ad:	0f 2f c8             	comiss xmm1,xmm0
100f98b0:	0f 82 c3 00 00 00    	jb     0x100f9979
100f98b6:	8d 45 98             	lea    eax,[ebp-0x68]
100f98b9:	50                   	push   eax
100f98ba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f98bd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f98c3:	8d 45 e8             	lea    eax,[ebp-0x18]
100f98c6:	6a 03                	push   0x3
100f98c8:	6a 00                	push   0x0
100f98ca:	50                   	push   eax
100f98cb:	8d 45 f4             	lea    eax,[ebp-0xc]
100f98ce:	50                   	push   eax
100f98cf:	e8 0c 0f 02 00       	call   0x1011a7e0
100f98d4:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100f98db:	10 
100f98dc:	83 c4 18             	add    esp,0x18
100f98df:	0f 2f 45 a8          	comiss xmm0,DWORD PTR [ebp-0x58]
100f98e3:	0f 86 e4 01 00 00    	jbe    0x100f9acd
100f98e9:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100f98ec:	85 c0                	test   eax,eax
100f98ee:	75 0e                	jne    0x100f98fe
100f98f0:	50                   	push   eax
100f98f1:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100f98f7:	83 c4 04             	add    esp,0x4
100f98fa:	85 c0                	test   eax,eax
100f98fc:	74 13                	je     0x100f9911
100f98fe:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
100f9901:	85 c9                	test   ecx,ecx
100f9903:	74 0c                	je     0x100f9911
100f9905:	8b 01                	mov    eax,DWORD PTR [ecx]
100f9907:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
100f990d:	85 c0                	test   eax,eax
100f990f:	74 4b                	je     0x100f995c
100f9911:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9914:	8b ce                	mov    ecx,esi
100f9916:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f991c:	50                   	push   eax
100f991d:	8d 45 dc             	lea    eax,[ebp-0x24]
100f9920:	c7 45 dc 00 00 80 41 	mov    DWORD PTR [ebp-0x24],0x41800000
100f9927:	50                   	push   eax
100f9928:	8d 45 d0             	lea    eax,[ebp-0x30]
100f992b:	c7 45 e0 00 00 80 41 	mov    DWORD PTR [ebp-0x20],0x41800000
100f9932:	50                   	push   eax
100f9933:	8d 45 98             	lea    eax,[ebp-0x68]
100f9936:	c7 45 e4 00 00 90 41 	mov    DWORD PTR [ebp-0x1c],0x41900000
100f993d:	50                   	push   eax
100f993e:	8d 45 f4             	lea    eax,[ebp-0xc]
100f9941:	c7 45 d0 00 00 80 c1 	mov    DWORD PTR [ebp-0x30],0xc1800000
100f9948:	50                   	push   eax
100f9949:	c7 45 d4 00 00 80 c1 	mov    DWORD PTR [ebp-0x2c],0xc1800000
100f9950:	c7 45 d8 00 00 90 c1 	mov    DWORD PTR [ebp-0x28],0xc1900000
100f9957:	e8 c4 5e fe ff       	call   0x100df820
100f995c:	f3 0f 7e 45 ac       	movq   xmm0,QWORD PTR [ebp-0x54]
100f9961:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100f9964:	f3 0f 10 4d a8       	movss  xmm1,DWORD PTR [ebp-0x58]
100f9969:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
100f996e:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100f9975:	10 
100f9976:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100f9979:	0f 2f c1             	comiss xmm0,xmm1
100f997c:	0f 86 4b 01 00 00    	jbe    0x100f9acd
100f9982:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100f9985:	85 c0                	test   eax,eax
100f9987:	75 12                	jne    0x100f999b
100f9989:	50                   	push   eax
100f998a:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100f9990:	83 c4 04             	add    esp,0x4
100f9993:	85 c0                	test   eax,eax
100f9995:	0f 84 d3 00 00 00    	je     0x100f9a6e
100f999b:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
100f999e:	85 ff                	test   edi,edi
100f99a0:	0f 84 c8 00 00 00    	je     0x100f9a6e
100f99a6:	e8 c5 26 02 00       	call   0x1011c070
100f99ab:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100f99b1:	8d 45 98             	lea    eax,[ebp-0x68]
100f99b4:	68 00 10 00 04       	push   0x4001000
100f99b9:	50                   	push   eax
100f99ba:	83 ec 0c             	sub    esp,0xc
100f99bd:	66 0f 6e c3          	movd   xmm0,ebx
100f99c1:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100f99c4:	8b cc                	mov    ecx,esp
100f99c6:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100f99c9:	51                   	push   ecx
100f99ca:	89 01                	mov    DWORD PTR [ecx],eax
100f99cc:	8b 42 2c             	mov    eax,DWORD PTR [edx+0x2c]
100f99cf:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100f99d2:	8b 42 30             	mov    eax,DWORD PTR [edx+0x30]
100f99d5:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100f99d8:	8b cf                	mov    ecx,edi
100f99da:	8b 07                	mov    eax,DWORD PTR [edi]
100f99dc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f99e1:	ff 76 04             	push   DWORD PTR [esi+0x4]
100f99e4:	ff 50 60             	call   DWORD PTR [eax+0x60]
100f99e7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f99ea:	50                   	push   eax
100f99eb:	50                   	push   eax
100f99ec:	e8 ff 1e 02 00       	call   0x1011b8f0
100f99f1:	8b 07                	mov    eax,DWORD PTR [edi]
100f99f3:	83 c4 08             	add    esp,0x8
100f99f6:	8b cf                	mov    ecx,edi
100f99f8:	ff 50 50             	call   DWORD PTR [eax+0x50]
100f99fb:	85 c0                	test   eax,eax
100f99fd:	74 6f                	je     0x100f9a6e
100f99ff:	8b 07                	mov    eax,DWORD PTR [edi]
100f9a01:	8b cf                	mov    ecx,edi
100f9a03:	ff 50 50             	call   DWORD PTR [eax+0x50]
100f9a06:	83 f8 01             	cmp    eax,0x1
100f9a09:	74 63                	je     0x100f9a6e
100f9a0b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9a0e:	6a 64                	push   0x64
100f9a10:	6a 00                	push   0x0
100f9a12:	83 ec 08             	sub    esp,0x8
100f9a15:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f9a1c:	3f 
100f9a1d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f9a24:	68 98 89 1a 10       	push   0x101a8998
100f9a29:	6a 00                	push   0x0
100f9a2b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f9a31:	e8 ba 2f 00 00       	call   0x100fc9f0
100f9a36:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9a39:	83 c4 0c             	add    esp,0xc
100f9a3c:	83 c0 08             	add    eax,0x8
100f9a3f:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
100f9a46:	40 
100f9a47:	c7 44 24 08 cd cc cc 	mov    DWORD PTR [esp+0x8],0x3dcccccd
100f9a4e:	3d 
100f9a4f:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3e800000
100f9a56:	3e 
100f9a57:	c7 04 24 00 00 a0 40 	mov    DWORD PTR [esp],0x40a00000
100f9a5e:	50                   	push   eax
100f9a5f:	e8 7c 03 02 00       	call   0x10119de0
100f9a64:	83 c4 14             	add    esp,0x14
100f9a67:	5f                   	pop    edi
100f9a68:	5e                   	pop    esi
100f9a69:	5b                   	pop    ebx
100f9a6a:	8b e5                	mov    esp,ebp
100f9a6c:	5d                   	pop    ebp
100f9a6d:	c3                   	ret
100f9a6e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9a71:	83 ec 10             	sub    esp,0x10
100f9a74:	83 c0 08             	add    eax,0x8
100f9a77:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
100f9a7e:	40 
100f9a7f:	c7 44 24 08 9a 99 19 	mov    DWORD PTR [esp+0x8],0x3e19999a
100f9a86:	3e 
100f9a87:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3e800000
100f9a8e:	3e 
100f9a8f:	c7 04 24 00 00 a0 40 	mov    DWORD PTR [esp],0x40a00000
100f9a96:	50                   	push   eax
100f9a97:	e8 44 03 02 00       	call   0x10119de0
100f9a9c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9a9f:	83 c4 14             	add    esp,0x14
100f9aa2:	6a 64                	push   0x64
100f9aa4:	6a 00                	push   0x0
100f9aa6:	83 ec 08             	sub    esp,0x8
100f9aa9:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f9ab0:	3f 
100f9ab1:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f9ab8:	68 98 89 1a 10       	push   0x101a8998
100f9abd:	6a 00                	push   0x0
100f9abf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f9ac5:	e8 26 2f 00 00       	call   0x100fc9f0
100f9aca:	83 c4 1c             	add    esp,0x1c
100f9acd:	5f                   	pop    edi
100f9ace:	5e                   	pop    esi
100f9acf:	5b                   	pop    ebx
100f9ad0:	8b e5                	mov    esp,ebp
100f9ad2:	5d                   	pop    ebp
100f9ad3:	c3                   	ret
