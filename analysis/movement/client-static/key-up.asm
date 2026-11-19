
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1007a7f0 <.text+0x797f0>:
1007a7f0:	55                   	push   ebp
1007a7f1:	8b ec                	mov    ebp,esp
1007a7f3:	56                   	push   esi
1007a7f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1007a7f7:	6a 01                	push   0x1
1007a7f9:	ff 15 a4 26 1b 10    	call   DWORD PTR ds:0x101b26a4
1007a7ff:	83 c4 04             	add    esp,0x4
1007a802:	80 38 00             	cmp    BYTE PTR [eax],0x0
1007a805:	74 43                	je     0x1007a84a
1007a807:	50                   	push   eax
1007a808:	e8 8f f2 07 00       	call   0x100f9a9c
1007a80d:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007a80f:	83 c4 04             	add    esp,0x4
1007a812:	3b c8                	cmp    ecx,eax
1007a814:	75 0b                	jne    0x1007a821
1007a816:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007a819:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1007a81f:	eb 12                	jmp    0x1007a833
1007a821:	39 46 04             	cmp    DWORD PTR [esi+0x4],eax
1007a824:	75 38                	jne    0x1007a85e
1007a826:	33 c0                	xor    eax,eax
1007a828:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1007a82f:	85 c9                	test   ecx,ecx
1007a831:	75 2b                	jne    0x1007a85e
1007a833:	85 c0                	test   eax,eax
1007a835:	75 27                	jne    0x1007a85e
1007a837:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1007a83a:	a8 01                	test   al,0x1
1007a83c:	74 20                	je     0x1007a85e
1007a83e:	83 e0 fe             	and    eax,0xfffffffe
1007a841:	83 c8 04             	or     eax,0x4
1007a844:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1007a847:	5e                   	pop    esi
1007a848:	5d                   	pop    ebp
1007a849:	c3                   	ret
1007a84a:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1007a851:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1007a857:	c7 46 08 04 00 00 00 	mov    DWORD PTR [esi+0x8],0x4
1007a85e:	5e                   	pop    esi
1007a85f:	5d                   	pop    ebp
1007a860:	c3                   	ret
1007a861:	cc                   	int3
1007a862:	cc                   	int3
1007a863:	cc                   	int3
1007a864:	cc                   	int3
1007a865:	cc                   	int3
1007a866:	cc                   	int3
1007a867:	cc                   	int3
1007a868:	cc                   	int3
1007a869:	cc                   	int3
1007a86a:	cc                   	int3
1007a86b:	cc                   	int3
1007a86c:	cc                   	int3
1007a86d:	cc                   	int3
1007a86e:	cc                   	int3
1007a86f:	cc                   	int3
1007a870:	e8 6b 13 00 00       	call   0x1007bbe0
1007a875:	e9 d6 fe ff ff       	jmp    0x1007a750
1007a87a:	cc                   	int3
1007a87b:	cc                   	int3
1007a87c:	cc                   	int3
1007a87d:	cc                   	int3
1007a87e:	cc                   	int3
1007a87f:	cc                   	int3
