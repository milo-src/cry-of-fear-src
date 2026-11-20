
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100177b0 <.text+0x167b0>:
100177b0:	55                   	push   ebp
100177b1:	8b ec                	mov    ebp,esp
100177b3:	51                   	push   ecx
100177b4:	53                   	push   ebx
100177b5:	8b d9                	mov    ebx,ecx
100177b7:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100177ba:	80 7b 0a 00          	cmp    BYTE PTR [ebx+0xa],0x0
100177be:	0f 84 46 01 00 00    	je     0x1001790a
100177c4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100177c9:	57                   	push   edi
100177ca:	bf 01 00 00 00       	mov    edi,0x1
100177cf:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100177d5:	0f 8c 2e 01 00 00    	jl     0x10017909
100177db:	56                   	push   esi
100177dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100177e0:	57                   	push   edi
100177e1:	e8 9a 1e 10 00       	call   0x10119680
100177e6:	8b f0                	mov    esi,eax
100177e8:	83 c4 04             	add    esp,0x4
100177eb:	85 f6                	test   esi,esi
100177ed:	0f 84 03 01 00 00    	je     0x100178f6
100177f3:	8b 16                	mov    edx,DWORD PTR [esi]
100177f5:	8b ce                	mov    ecx,esi
100177f7:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
100177fd:	85 c0                	test   eax,eax
100177ff:	0f 84 f1 00 00 00    	je     0x100178f6
10017805:	ff 76 04             	push   DWORD PTR [esi+0x4]
10017808:	e8 d3 ad ff ff       	call   0x100125e0
1001780d:	8b f0                	mov    esi,eax
1001780f:	83 c4 04             	add    esp,0x4
10017812:	85 f6                	test   esi,esi
10017814:	0f 84 dc 00 00 00    	je     0x100178f6
1001781a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10017820:	8b 5b 04             	mov    ebx,DWORD PTR [ebx+0x4]
10017823:	8b 96 08 06 00 00    	mov    edx,DWORD PTR [esi+0x608]
10017829:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1001782f:	03 d1                	add    edx,ecx
10017831:	8b 83 d0 01 00 00    	mov    eax,DWORD PTR [ebx+0x1d0]
10017837:	03 c1                	add    eax,ecx
10017839:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10017840:	8a 08                	mov    cl,BYTE PTR [eax]
10017842:	3a 0a                	cmp    cl,BYTE PTR [edx]
10017844:	75 1a                	jne    0x10017860
10017846:	84 c9                	test   cl,cl
10017848:	74 12                	je     0x1001785c
1001784a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1001784d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10017850:	75 0e                	jne    0x10017860
10017852:	83 c0 02             	add    eax,0x2
10017855:	83 c2 02             	add    edx,0x2
10017858:	84 c9                	test   cl,cl
1001785a:	75 e4                	jne    0x10017840
1001785c:	33 c0                	xor    eax,eax
1001785e:	eb 05                	jmp    0x10017865
10017860:	1b c0                	sbb    eax,eax
10017862:	83 c8 01             	or     eax,0x1
10017865:	85 c0                	test   eax,eax
10017867:	0f 85 86 00 00 00    	jne    0x100178f3
1001786d:	f3 0f 2c 83 64 01 00 	cvttss2si eax,DWORD PTR [ebx+0x164]
10017874:	00 
10017875:	33 c9                	xor    ecx,ecx
10017877:	85 c0                	test   eax,eax
10017879:	0f 48 c1             	cmovs  eax,ecx
1001787c:	89 86 04 06 00 00    	mov    DWORD PTR [esi+0x604],eax
10017882:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017885:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1001788b:	51                   	push   ecx
1001788c:	ff 35 20 66 22 10    	push   DWORD PTR ds:0x10226620
10017892:	6a 01                	push   0x1
10017894:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1001789a:	6a 01                	push   0x1
1001789c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100178a2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100178a7:	8b 8e f8 05 00 00    	mov    ecx,DWORD PTR [esi+0x5f8]
100178ad:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100178b3:	51                   	push   ecx
100178b4:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100178ba:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100178bf:	8b 8e fc 05 00 00    	mov    ecx,DWORD PTR [esi+0x5fc]
100178c5:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100178cb:	51                   	push   ecx
100178cc:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100178d2:	ff b6 04 06 00 00    	push   DWORD PTR [esi+0x604]
100178d8:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100178de:	ff b6 00 06 00 00    	push   DWORD PTR [esi+0x600]
100178e4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100178ea:	83 c4 24             	add    esp,0x24
100178ed:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100178f3:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100178f6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100178fb:	47                   	inc    edi
100178fc:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
10017902:	0f 8e d8 fe ff ff    	jle    0x100177e0
10017908:	5e                   	pop    esi
10017909:	5f                   	pop    edi
1001790a:	5b                   	pop    ebx
1001790b:	8b e5                	mov    esp,ebp
1001790d:	5d                   	pop    ebp
1001790e:	c3                   	ret
