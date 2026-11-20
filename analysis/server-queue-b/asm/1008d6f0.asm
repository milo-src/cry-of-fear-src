
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008d6f0 <.text+0x8c6f0>:
1008d6f0:	56                   	push   esi
1008d6f1:	8b f1                	mov    esi,ecx
1008d6f3:	57                   	push   edi
1008d6f4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d6f7:	8b fa                	mov    edi,edx
1008d6f9:	83 ba a4 01 00 00 00 	cmp    DWORD PTR [edx+0x1a4],0x0
1008d700:	7c 78                	jl     0x1008d77a
1008d702:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d707:	8b 8a f0 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f0]
1008d70d:	6a 64                	push   0x64
1008d70f:	6a 20                	push   0x20
1008d711:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008d717:	83 ec 08             	sub    esp,0x8
1008d71a:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
1008d721:	00 
1008d722:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d729:	51                   	push   ecx
1008d72a:	6a 06                	push   0x6
1008d72c:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008d732:	e8 b9 f2 06 00       	call   0x100fc9f0
1008d737:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d73a:	83 c4 1c             	add    esp,0x1c
1008d73d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d742:	8b 8a f4 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f4]
1008d748:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008d74e:	6a 64                	push   0x64
1008d750:	6a 00                	push   0x0
1008d752:	83 ec 08             	sub    esp,0x8
1008d755:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008d75c:	3f 
1008d75d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008d764:	51                   	push   ecx
1008d765:	6a 06                	push   0x6
1008d767:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008d76d:	e8 7e f2 06 00       	call   0x100fc9f0
1008d772:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d775:	83 c4 1c             	add    esp,0x1c
1008d778:	8b fa                	mov    edi,edx
1008d77a:	c7 86 00 01 00 00 01 	mov    DWORD PTR [esi+0x100],0x1
1008d781:	00 00 00 
1008d784:	33 c9                	xor    ecx,ecx
1008d786:	8b 82 a4 01 00 00    	mov    eax,DWORD PTR [edx+0x1a4]
1008d78c:	ba 20 da 08 10       	mov    edx,0x1008da20
1008d791:	25 00 05 00 00       	and    eax,0x500
1008d796:	3d 00 01 00 00       	cmp    eax,0x100
1008d79b:	0f 45 ca             	cmovne ecx,edx
1008d79e:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
1008d7a1:	f6 87 a4 01 00 00 01 	test   BYTE PTR [edi+0x1a4],0x1
1008d7a8:	74 36                	je     0x1008d7e0
1008d7aa:	83 bf d8 01 00 00 00 	cmp    DWORD PTR [edi+0x1d8],0x0
1008d7b1:	74 6a                	je     0x1008d81d
1008d7b3:	51                   	push   ecx
1008d7b4:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d7bb:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d7c1:	6a 03                	push   0x3
1008d7c3:	56                   	push   esi
1008d7c4:	e8 c7 9f f8 ff       	call   0x10017790
1008d7c9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d7cc:	50                   	push   eax
1008d7cd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d7d2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d7d8:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
1008d7de:	eb 34                	jmp    0x1008d814
1008d7e0:	83 bf d4 01 00 00 00 	cmp    DWORD PTR [edi+0x1d4],0x0
1008d7e7:	74 34                	je     0x1008d81d
1008d7e9:	51                   	push   ecx
1008d7ea:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d7f1:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d7f7:	6a 03                	push   0x3
1008d7f9:	56                   	push   esi
1008d7fa:	e8 91 9f f8 ff       	call   0x10017790
1008d7ff:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d802:	50                   	push   eax
1008d803:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d808:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d80e:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
1008d814:	50                   	push   eax
1008d815:	e8 d6 47 07 00       	call   0x10101ff0
1008d81a:	83 c4 14             	add    esp,0x14
1008d81d:	83 be b0 01 00 00 00 	cmp    DWORD PTR [esi+0x1b0],0x0
1008d824:	75 38                	jne    0x1008d85e
1008d826:	83 be ac 01 00 00 00 	cmp    DWORD PTR [esi+0x1ac],0x0
1008d82d:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d833:	51                   	push   ecx
1008d834:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d83b:	74 12                	je     0x1008d84f
1008d83d:	6a 01                	push   0x1
1008d83f:	e8 4c 9f f8 ff       	call   0x10017790
1008d844:	50                   	push   eax
1008d845:	8b ce                	mov    ecx,esi
1008d847:	e8 e4 50 07 00       	call   0x10102930
1008d84c:	5f                   	pop    edi
1008d84d:	5e                   	pop    esi
1008d84e:	c3                   	ret
1008d84f:	6a 03                	push   0x3
1008d851:	e8 3a 9f f8 ff       	call   0x10017790
1008d856:	50                   	push   eax
1008d857:	8b ce                	mov    ecx,esi
1008d859:	e8 d2 50 07 00       	call   0x10102930
1008d85e:	5f                   	pop    edi
1008d85f:	5e                   	pop    esi
1008d860:	c3                   	ret
