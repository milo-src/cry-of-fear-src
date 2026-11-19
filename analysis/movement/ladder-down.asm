
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004f780 <.text+0x4e780>:
1004f780:	55                   	push   ebp
1004f781:	8b ec                	mov    ebp,esp
1004f783:	51                   	push   ecx
1004f784:	56                   	push   esi
1004f785:	8b f1                	mov    esi,ecx
1004f787:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004f78a:	8b 80 9c 01 00 00    	mov    eax,DWORD PTR [eax+0x19c]
1004f790:	85 c0                	test   eax,eax
1004f792:	0f 84 ac 03 00 00    	je     0x1004fb44
1004f798:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
1004f79b:	85 c0                	test   eax,eax
1004f79d:	0f 84 a1 03 00 00    	je     0x1004fb44
1004f7a3:	57                   	push   edi
1004f7a4:	ff 70 04             	push   DWORD PTR [eax+0x4]
1004f7a7:	e8 34 2e fc ff       	call   0x100125e0
1004f7ac:	8b f8                	mov    edi,eax
1004f7ae:	83 c4 04             	add    esp,0x4
1004f7b1:	85 ff                	test   edi,edi
1004f7b3:	0f 84 8a 03 00 00    	je     0x1004fb43
1004f7b9:	83 bf ac 05 00 00 00 	cmp    DWORD PTR [edi+0x5ac],0x0
1004f7c0:	0f 84 7d 03 00 00    	je     0x1004fb43
1004f7c6:	ff 8e b0 01 00 00    	dec    DWORD PTR [esi+0x1b0]
1004f7cc:	80 be 21 01 00 00 00 	cmp    BYTE PTR [esi+0x121],0x0
1004f7d3:	8b 8e b0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1b0]
1004f7d9:	c6 86 a8 01 00 00 00 	mov    BYTE PTR [esi+0x1a8],0x0
1004f7e0:	74 28                	je     0x1004f80a
1004f7e2:	c6 86 21 01 00 00 00 	mov    BYTE PTR [esi+0x121],0x0
1004f7e9:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004f7ef:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f7f2:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004f7f7:	f3 0f 5c 05 bc fe 1a 	subss  xmm0,DWORD PTR ds:0x101afebc
1004f7fe:	10 
1004f7ff:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004f804:	8b 8e b0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1b0]
1004f80a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f80f:	8b 8c 8e 24 01 00 00 	mov    ecx,DWORD PTR [esi+ecx*4+0x124]
1004f816:	68 88 1c 1b 10       	push   0x101b1c88
1004f81b:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004f821:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f828:	51                   	push   ecx
1004f829:	74 14                	je     0x1004f83f
1004f82b:	e8 c0 fd 0e 00       	call   0x1013f5f0
1004f830:	83 c4 08             	add    esp,0x8
1004f833:	85 c0                	test   eax,eax
1004f835:	74 2b                	je     0x1004f862
1004f837:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1004f83d:	eb 12                	jmp    0x1004f851
1004f83f:	e8 ac fd 0e 00       	call   0x1013f5f0
1004f844:	83 c4 08             	add    esp,0x8
1004f847:	85 c0                	test   eax,eax
1004f849:	74 17                	je     0x1004f862
1004f84b:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
1004f851:	85 c9                	test   ecx,ecx
1004f853:	74 0d                	je     0x1004f862
1004f855:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f85b:	89 8c 86 24 01 00 00 	mov    DWORD PTR [esi+eax*4+0x124],ecx
1004f862:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f867:	68 78 1c 1b 10       	push   0x101b1c78
1004f86c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f872:	03 86 e8 00 00 00    	add    eax,DWORD PTR [esi+0xe8]
1004f878:	83 be b0 01 00 00 01 	cmp    DWORD PTR [esi+0x1b0],0x1
1004f87f:	50                   	push   eax
1004f880:	0f 8f dd 01 00 00    	jg     0x1004fa63
1004f886:	e8 65 fd 0e 00       	call   0x1013f5f0
1004f88b:	83 c4 08             	add    esp,0x8
1004f88e:	85 c0                	test   eax,eax
1004f890:	74 1b                	je     0x1004f8ad
1004f892:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004f898:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f89b:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004f8a0:	f3 0f 5c 05 bc fe 1a 	subss  xmm0,DWORD PTR ds:0x101afebc
1004f8a7:	10 
1004f8a8:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004f8ad:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f8b4:	74 2c                	je     0x1004f8e2
1004f8b6:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1004f8bc:	85 c9                	test   ecx,ecx
1004f8be:	74 15                	je     0x1004f8d5
1004f8c0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f8c5:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f8cb:	03 c1                	add    eax,ecx
1004f8cd:	8b 8f ac 05 00 00    	mov    ecx,DWORD PTR [edi+0x5ac]
1004f8d3:	eb 31                	jmp    0x1004f906
1004f8d5:	8b 8f ac 05 00 00    	mov    ecx,DWORD PTR [edi+0x5ac]
1004f8db:	b8 94 1c 1b 10       	mov    eax,0x101b1c94
1004f8e0:	eb 24                	jmp    0x1004f906
1004f8e2:	8b 96 ec 00 00 00    	mov    edx,DWORD PTR [esi+0xec]
1004f8e8:	8b 8f ac 05 00 00    	mov    ecx,DWORD PTR [edi+0x5ac]
1004f8ee:	85 d2                	test   edx,edx
1004f8f0:	74 0f                	je     0x1004f901
1004f8f2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f8f7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f8fd:	03 c2                	add    eax,edx
1004f8ff:	eb 05                	jmp    0x1004f906
1004f901:	b8 94 1c 1b 10       	mov    eax,0x101b1c94
1004f906:	50                   	push   eax
1004f907:	e8 b4 27 07 00       	call   0x100c20c0
1004f90c:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f913:	74 41                	je     0x1004f956
1004f915:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1004f91b:	85 c9                	test   ecx,ecx
1004f91d:	74 78                	je     0x1004f997
1004f91f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f924:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f92a:	03 c1                	add    eax,ecx
1004f92c:	50                   	push   eax
1004f92d:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004f933:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f936:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004f93c:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1004f942:	83 c4 04             	add    esp,0x4
1004f945:	50                   	push   eax
1004f946:	e8 95 fa fb ff       	call   0x1000f3e0
1004f94b:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1004f951:	83 c4 08             	add    esp,0x8
1004f954:	eb 77                	jmp    0x1004f9cd
1004f956:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
1004f95c:	85 c9                	test   ecx,ecx
1004f95e:	74 37                	je     0x1004f997
1004f960:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f965:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f96b:	03 c1                	add    eax,ecx
1004f96d:	50                   	push   eax
1004f96e:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004f974:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f977:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004f97d:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1004f983:	83 c4 04             	add    esp,0x4
1004f986:	50                   	push   eax
1004f987:	e8 54 fa fb ff       	call   0x1000f3e0
1004f98c:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
1004f992:	83 c4 08             	add    esp,0x8
1004f995:	eb 36                	jmp    0x1004f9cd
1004f997:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004f99d:	68 94 1c 1b 10       	push   0x101b1c94
1004f9a2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f9a5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004f9ab:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1004f9b1:	83 c4 04             	add    esp,0x4
1004f9b4:	50                   	push   eax
1004f9b5:	e8 26 fa fb ff       	call   0x1000f3e0
1004f9ba:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f9bf:	b9 94 1c 1b 10       	mov    ecx,0x101b1c94
1004f9c4:	83 c4 08             	add    esp,0x8
1004f9c7:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1004f9cd:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1004f9d0:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
1004f9d5:	89 8e e8 00 00 00    	mov    DWORD PTR [esi+0xe8],ecx
1004f9db:	0f 2e 0d 70 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1370
1004f9e2:	9f                   	lahf
1004f9e3:	f6 c4 44             	test   ah,0x44
1004f9e6:	7b 44                	jnp    0x1004fa2c
1004f9e8:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f9ee:	3b 86 ac 01 00 00    	cmp    eax,DWORD PTR [esi+0x1ac]
1004f9f4:	75 1c                	jne    0x1004fa12
1004f9f6:	c6 86 dd 00 00 00 01 	mov    BYTE PTR [esi+0xdd],0x1
1004f9fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004fa02:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004fa06:	f3 0f 58 c1          	addss  xmm0,xmm1
1004fa0a:	f3                   	repz
1004fa0b:	0f                   	.byte 0xf
1004fa0c:	11                   	.byte 0x11
1004fa0d:	86 e0                	xchg   al,ah
	...
