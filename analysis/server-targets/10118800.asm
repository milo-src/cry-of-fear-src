
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118800 <.text+0x117800>:
10118800:	55                   	push   ebp
10118801:	8b ec                	mov    ebp,esp
10118803:	83 ec 68             	sub    esp,0x68
10118806:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011880b:	33 c5                	xor    eax,ebp
1011880d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10118810:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10118813:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
10118816:	89 45 a0             	mov    DWORD PTR [ebp-0x60],eax
10118819:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011881c:	53                   	push   ebx
1011881d:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
10118820:	83 cb ff             	or     ebx,0xffffffff
10118823:	33 c0                	xor    eax,eax
10118825:	89 4d a8             	mov    DWORD PTR [ebp-0x58],ecx
10118828:	56                   	push   esi
10118829:	89 45 98             	mov    DWORD PTR [ebp-0x68],eax
1011882c:	33 f6                	xor    esi,esi
1011882e:	8a 01                	mov    al,BYTE PTR [ecx]
10118830:	57                   	push   edi
10118831:	33 ff                	xor    edi,edi
10118833:	89 7d a4             	mov    DWORD PTR [ebp-0x5c],edi
10118836:	84 c0                	test   al,al
10118838:	74 15                	je     0x1011884f
1011883a:	8b f9                	mov    edi,ecx
1011883c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10118840:	3c 2e                	cmp    al,0x2e
10118842:	74 61                	je     0x101188a5
10118844:	46                   	inc    esi
10118845:	8a 04 31             	mov    al,BYTE PTR [ecx+esi*1]
10118848:	8d 3c 31             	lea    edi,[ecx+esi*1]
1011884b:	84 c0                	test   al,al
1011884d:	75 f1                	jne    0x10118840
1011884f:	8b f1                	mov    esi,ecx
10118851:	ff 75 9c             	push   DWORD PTR [ebp-0x64]
10118854:	6a 00                	push   0x0
10118856:	e8 35 fd ff ff       	call   0x10118590
1011885b:	8b f8                	mov    edi,eax
1011885d:	83 c4 08             	add    esp,0x8
10118860:	85 ff                	test   edi,edi
10118862:	0f 84 fe 00 00 00    	je     0x10118966
10118868:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1011886f:	00 
10118870:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10118873:	ba a4 57 1e 10       	mov    edx,0x101e57a4
10118878:	8b 08                	mov    ecx,DWORD PTR [eax]
1011887a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011887f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10118885:	8a 01                	mov    al,BYTE PTR [ecx]
10118887:	3a 02                	cmp    al,BYTE PTR [edx]
10118889:	75 42                	jne    0x101188cd
1011888b:	84 c0                	test   al,al
1011888d:	74 12                	je     0x101188a1
1011888f:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
10118892:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10118895:	75 36                	jne    0x101188cd
10118897:	83 c1 02             	add    ecx,0x2
1011889a:	83 c2 02             	add    edx,0x2
1011889d:	84 c0                	test   al,al
1011889f:	75 e4                	jne    0x10118885
101188a1:	33 c0                	xor    eax,eax
101188a3:	eb 2d                	jmp    0x101188d2
101188a5:	56                   	push   esi
101188a6:	51                   	push   ecx
101188a7:	8d 45 ac             	lea    eax,[ebp-0x54]
101188aa:	50                   	push   eax
101188ab:	e8 50 6e 05 00       	call   0x1016f700
101188b0:	83 c4 0c             	add    esp,0xc
101188b3:	83 fe 50             	cmp    esi,0x50
101188b6:	0f 83 bd 00 00 00    	jae    0x10118979
101188bc:	c6 44 35 ac 00       	mov    BYTE PTR [ebp+esi*1-0x54],0x0
101188c1:	47                   	inc    edi
101188c2:	8d 75 ac             	lea    esi,[ebp-0x54]
101188c5:	89 7d a4             	mov    DWORD PTR [ebp-0x5c],edi
101188c8:	89 75 a8             	mov    DWORD PTR [ebp-0x58],esi
101188cb:	eb 84                	jmp    0x10118851
101188cd:	1b c0                	sbb    eax,eax
101188cf:	83 c8 01             	or     eax,0x1
101188d2:	85 c0                	test   eax,eax
101188d4:	75 70                	jne    0x10118946
101188d6:	56                   	push   esi
101188d7:	8b cf                	mov    ecx,edi
101188d9:	e8 b2 4f ef ff       	call   0x1000d890
101188de:	8b c8                	mov    ecx,eax
101188e0:	85 c9                	test   ecx,ecx
101188e2:	74 62                	je     0x10118946
101188e4:	8b 45 a4             	mov    eax,DWORD PTR [ebp-0x5c]
101188e7:	85 c0                	test   eax,eax
101188e9:	74 1c                	je     0x10118907
101188eb:	50                   	push   eax
101188ec:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101188f1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
101188f7:	03 c1                	add    eax,ecx
101188f9:	50                   	push   eax
101188fa:	ff 75 a0             	push   DWORD PTR [ebp-0x60]
101188fd:	e8 fe fe ff ff       	call   0x10118800
10118902:	83 c4 0c             	add    esp,0xc
10118905:	eb 19                	jmp    0x10118920
10118907:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011890c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10118912:	03 c1                	add    eax,ecx
10118914:	50                   	push   eax
10118915:	ff 75 a0             	push   DWORD PTR [ebp-0x60]
10118918:	e8 73 fc ff ff       	call   0x10118590
1011891d:	83 c4 08             	add    esp,0x8
10118920:	8b f0                	mov    esi,eax
10118922:	85 f6                	test   esi,esi
10118924:	74 20                	je     0x10118946
10118926:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10118929:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011892f:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10118935:	83 c4 04             	add    esp,0x4
10118938:	83 fb ff             	cmp    ebx,0xffffffff
1011893b:	74 04                	je     0x10118941
1011893d:	3b c3                	cmp    eax,ebx
1011893f:	7d 05                	jge    0x10118946
10118941:	8b d8                	mov    ebx,eax
10118943:	89 75 98             	mov    DWORD PTR [ebp-0x68],esi
10118946:	ff 75 9c             	push   DWORD PTR [ebp-0x64]
10118949:	57                   	push   edi
1011894a:	e8 41 fc ff ff       	call   0x10118590
1011894f:	8b 75 a8             	mov    esi,DWORD PTR [ebp-0x58]
10118952:	8b f8                	mov    edi,eax
10118954:	83 c4 08             	add    esp,0x8
10118957:	85 ff                	test   edi,edi
10118959:	0f 85 11 ff ff ff    	jne    0x10118870
1011895f:	8b 45 98             	mov    eax,DWORD PTR [ebp-0x68]
10118962:	85 c0                	test   eax,eax
10118964:	75 02                	jne    0x10118968
10118966:	33 c0                	xor    eax,eax
10118968:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011896b:	5f                   	pop    edi
1011896c:	5e                   	pop    esi
1011896d:	33 cd                	xor    ecx,ebp
1011896f:	5b                   	pop    ebx
10118970:	e8 3e 52 02 00       	call   0x1013dbb3
10118975:	8b e5                	mov    esp,ebp
10118977:	5d                   	pop    ebp
10118978:	c3                   	ret
10118979:	e8 ca 53 02 00       	call   0x1013dd48
