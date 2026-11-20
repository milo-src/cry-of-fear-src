
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101048c0 <.text+0x1038c0>:
101048c0:	55                   	push   ebp
101048c1:	8b ec                	mov    ebp,esp
101048c3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101048c8:	56                   	push   esi
101048c9:	8b f1                	mov    esi,ecx
101048cb:	57                   	push   edi
101048cc:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
101048cf:	f3 0f 10 86 c0 03 00 	movss  xmm0,DWORD PTR [esi+0x3c0]
101048d6:	00 
101048d7:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
101048da:	76 09                	jbe    0x101048e5
101048dc:	83 ff 02             	cmp    edi,0x2
101048df:	0f 84 24 01 00 00    	je     0x10104a09
101048e5:	53                   	push   ebx
101048e6:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
101048e9:	85 db                	test   ebx,ebx
101048eb:	0f 84 17 01 00 00    	je     0x10104a08
101048f1:	8b 03                	mov    eax,DWORD PTR [ebx]
101048f3:	8b cb                	mov    ecx,ebx
101048f5:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
101048fb:	85 c0                	test   eax,eax
101048fd:	0f 84 05 01 00 00    	je     0x10104a08
10104903:	8b ce                	mov    ecx,esi
10104905:	e8 d6 f6 ff ff       	call   0x10103fe0
1010490a:	85 c0                	test   eax,eax
1010490c:	0f 84 f6 00 00 00    	je     0x10104a08
10104912:	8b ce                	mov    ecx,esi
10104914:	e8 f7 05 00 00       	call   0x10104f10
10104919:	85 c0                	test   eax,eax
1010491b:	75 7f                	jne    0x1010499c
1010491d:	83 ff 02             	cmp    edi,0x2
10104920:	75 29                	jne    0x1010494b
10104922:	8b ce                	mov    ecx,esi
10104924:	e8 f7 d9 ff ff       	call   0x10102320
10104929:	85 c0                	test   eax,eax
1010492b:	0f 85 93 00 00 00    	jne    0x101049c4
10104931:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10104934:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
1010493b:	01 00 00 
1010493e:	74 13                	je     0x10104953
10104940:	83 be 7c 01 00 00 00 	cmp    DWORD PTR [esi+0x17c],0x0
10104947:	75 0a                	jne    0x10104953
10104949:	eb 79                	jmp    0x101049c4
1010494b:	85 ff                	test   edi,edi
1010494d:	0f 84 b5 00 00 00    	je     0x10104a08
10104953:	6a 01                	push   0x1
10104955:	53                   	push   ebx
10104956:	8b ce                	mov    ecx,esi
10104958:	e8 23 08 00 00       	call   0x10105180
1010495d:	f6 86 ec 02 00 00 01 	test   BYTE PTR [esi+0x2ec],0x1
10104964:	74 17                	je     0x1010497d
10104966:	68 d0 f9 1d 10       	push   0x101df9d0
1010496b:	6a 02                	push   0x2
1010496d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10104973:	83 c4 08             	add    esp,0x8
10104976:	5b                   	pop    ebx
10104977:	5f                   	pop    edi
10104978:	5e                   	pop    esi
10104979:	5d                   	pop    ebp
1010497a:	c2 10 00             	ret    0x10
1010497d:	33 c0                	xor    eax,eax
1010497f:	8b ce                	mov    ecx,esi
10104981:	83 ff 02             	cmp    edi,0x2
10104984:	0f 94 c0             	sete   al
10104987:	50                   	push   eax
10104988:	53                   	push   ebx
10104989:	e8 92 0f 00 00       	call   0x10105920
1010498e:	83 8e 68 03 00 00 08 	or     DWORD PTR [esi+0x368],0x8
10104995:	5b                   	pop    ebx
10104996:	5f                   	pop    edi
10104997:	5e                   	pop    esi
10104998:	5d                   	pop    ebp
10104999:	c2 10 00             	ret    0x10
1010499c:	83 ff 02             	cmp    edi,0x2
1010499f:	75 4d                	jne    0x101049ee
101049a1:	8b ce                	mov    ecx,esi
101049a3:	e8 78 d9 ff ff       	call   0x10102320
101049a8:	85 c0                	test   eax,eax
101049aa:	75 18                	jne    0x101049c4
101049ac:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101049af:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
101049b6:	01 00 00 
101049b9:	74 38                	je     0x101049f3
101049bb:	83 be 7c 01 00 00 00 	cmp    DWORD PTR [esi+0x17c],0x0
101049c2:	75 2f                	jne    0x101049f3
101049c4:	8b 06                	mov    eax,DWORD PTR [esi]
101049c6:	8b ce                	mov    ecx,esi
101049c8:	ff 90 48 02 00 00    	call   DWORD PTR [eax+0x248]
101049ce:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101049d3:	5b                   	pop    ebx
101049d4:	5f                   	pop    edi
101049d5:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
101049d9:	f3 0f 58 05 a0 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ea0
101049e0:	10 
101049e1:	f3 0f 11 86 c0 03 00 	movss  DWORD PTR [esi+0x3c0],xmm0
101049e8:	00 
101049e9:	5e                   	pop    esi
101049ea:	5d                   	pop    ebp
101049eb:	c2 10 00             	ret    0x10
101049ee:	83 ff 01             	cmp    edi,0x1
101049f1:	74 15                	je     0x10104a08
101049f3:	8b 16                	mov    edx,DWORD PTR [esi]
101049f5:	33 c0                	xor    eax,eax
101049f7:	83 ff 02             	cmp    edi,0x2
101049fa:	8b ce                	mov    ecx,esi
101049fc:	0f 94 c0             	sete   al
101049ff:	50                   	push   eax
10104a00:	6a 01                	push   0x1
10104a02:	ff 92 40 02 00 00    	call   DWORD PTR [edx+0x240]
10104a08:	5b                   	pop    ebx
10104a09:	5f                   	pop    edi
10104a0a:	5e                   	pop    esi
10104a0b:	5d                   	pop    ebp
10104a0c:	c2 10 00             	ret    0x10
