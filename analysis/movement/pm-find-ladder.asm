
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006930 <.text+0x5930>:
10006930:	55                   	push   ebp
10006931:	8b ec                	mov    ebp,esp
10006933:	83 ec 10             	sub    esp,0x10
10006936:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000693b:	33 c5                	xor    eax,ebp
1000693d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10006940:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006945:	53                   	push   ebx
10006946:	56                   	push   esi
10006947:	57                   	push   edi
10006948:	33 ff                	xor    edi,edi
1000694a:	39 b8 50 0f 02 00    	cmp    DWORD PTR [eax+0x20f50],edi
10006950:	0f 8e ba 00 00 00    	jle    0x10006a10
10006956:	33 db                	xor    ebx,ebx
10006958:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1000695f:	00 
10006960:	8d b0 54 0f 02 00    	lea    esi,[eax+0x20f54]
10006966:	03 f3                	add    esi,ebx
10006968:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1000696b:	85 c9                	test   ecx,ecx
1000696d:	0f 84 8a 00 00 00    	je     0x100069fd
10006973:	8b 80 94 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f594]
10006979:	51                   	push   ecx
1000697a:	ff d0                	call   eax
1000697c:	83 c4 04             	add    esp,0x4
1000697f:	85 c0                	test   eax,eax
10006981:	75 75                	jne    0x100069f8
10006983:	83 7e 64 f0          	cmp    DWORD PTR [esi+0x64],0xfffffff0
10006987:	75 6f                	jne    0x100069f8
10006989:	83 be 90 00 00 00 01 	cmp    DWORD PTR [esi+0x90],0x1
10006990:	74 66                	je     0x100069f8
10006992:	8d 45 f0             	lea    eax,[ebp-0x10]
10006995:	50                   	push   eax
10006996:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000699b:	56                   	push   esi
1000699c:	8b 80 9c f5 04 00    	mov    eax,DWORD PTR [eax+0x4f59c]
100069a2:	ff d0                	call   eax
100069a4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100069aa:	8b d0                	mov    edx,eax
100069ac:	f3 0f 10 41 38       	movss  xmm0,DWORD PTR [ecx+0x38]
100069b1:	f3 0f 5c 45 f0       	subss  xmm0,DWORD PTR [ebp-0x10]
100069b6:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100069b9:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100069be:	f3 0f 10 41 3c       	movss  xmm0,DWORD PTR [ecx+0x3c]
100069c3:	f3 0f 5c 45 f4       	subss  xmm0,DWORD PTR [ebp-0xc]
100069c8:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100069cd:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
100069d2:	8d 4d f0             	lea    ecx,[ebp-0x10]
100069d5:	f3 0f 5c 45 f8       	subss  xmm0,DWORD PTR [ebp-0x8]
100069da:	51                   	push   ecx
100069db:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100069e1:	50                   	push   eax
100069e2:	52                   	push   edx
100069e3:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100069e8:	8b 81 80 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f580]
100069ee:	ff d0                	call   eax
100069f0:	83 c4 14             	add    esp,0x14
100069f3:	83 f8 ff             	cmp    eax,0xffffffff
100069f6:	75 2b                	jne    0x10006a23
100069f8:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100069fd:	47                   	inc    edi
100069fe:	81 c3 e0 00 00 00    	add    ebx,0xe0
10006a04:	3b b8 50 0f 02 00    	cmp    edi,DWORD PTR [eax+0x20f50]
10006a0a:	0f 8c 50 ff ff ff    	jl     0x10006960
10006a10:	5f                   	pop    edi
10006a11:	5e                   	pop    esi
10006a12:	33 c0                	xor    eax,eax
10006a14:	5b                   	pop    ebx
10006a15:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10006a18:	33 cd                	xor    ecx,ebp
10006a1a:	e8 94 71 13 00       	call   0x1013dbb3
10006a1f:	8b e5                	mov    esp,ebp
10006a21:	5d                   	pop    ebp
10006a22:	c3                   	ret
10006a23:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10006a26:	8b c6                	mov    eax,esi
10006a28:	5f                   	pop    edi
10006a29:	5e                   	pop    esi
10006a2a:	33 cd                	xor    ecx,ebp
10006a2c:	5b                   	pop    ebx
10006a2d:	e8 81 71 13 00       	call   0x1013dbb3
10006a32:	8b e5                	mov    esp,ebp
10006a34:	5d                   	pop    ebp
10006a35:	c3                   	ret
10006a36:	cc                   	int3
10006a37:	cc                   	int3
10006a38:	cc                   	int3
10006a39:	cc                   	int3
10006a3a:	cc                   	int3
10006a3b:	cc                   	int3
10006a3c:	cc                   	int3
10006a3d:	cc                   	int3
10006a3e:	cc                   	int3
10006a3f:	cc                   	int3
