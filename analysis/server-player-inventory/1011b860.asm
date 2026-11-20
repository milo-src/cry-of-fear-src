
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b860 <.text+0x11a860>:
1011b860:	55                   	push   ebp
1011b861:	8b ec                	mov    ebp,esp
1011b863:	53                   	push   ebx
1011b864:	56                   	push   esi
1011b865:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011b868:	57                   	push   edi
1011b869:	56                   	push   esi
1011b86a:	8b f9                	mov    edi,ecx
1011b86c:	e8 cf ff ff ff       	call   0x1011b840
1011b871:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
1011b874:	8b d8                	mov    ebx,eax
1011b876:	8b 8f 68 01 00 00    	mov    ecx,DWORD PTR [edi+0x168]
1011b87c:	8b 96 6c 01 00 00    	mov    edx,DWORD PTR [esi+0x16c]
1011b882:	0f ab ca             	bts    edx,ecx
1011b885:	89 96 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],edx
1011b88b:	83 bf dc 01 00 00 00 	cmp    DWORD PTR [edi+0x1dc],0x0
1011b892:	75 33                	jne    0x1011b8c7
1011b894:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011b89b:	ff b0 90 18 23 10    	push   DWORD PTR [eax+0x10231890]
1011b8a1:	e8 ba 45 fc ff       	call   0x100dfe60
1011b8a6:	89 87 dc 01 00 00    	mov    DWORD PTR [edi+0x1dc],eax
1011b8ac:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011b8b3:	ff b0 98 18 23 10    	push   DWORD PTR [eax+0x10231898]
1011b8b9:	e8 a2 45 fc ff       	call   0x100dfe60
1011b8be:	83 c4 08             	add    esp,0x8
1011b8c1:	89 87 e0 01 00 00    	mov    DWORD PTR [edi+0x1e0],eax
1011b8c7:	85 db                	test   ebx,ebx
1011b8c9:	74 11                	je     0x1011b8dc
1011b8cb:	8b 07                	mov    eax,DWORD PTR [edi]
1011b8cd:	8b cf                	mov    ecx,edi
1011b8cf:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
1011b8d5:	5f                   	pop    edi
1011b8d6:	5e                   	pop    esi
1011b8d7:	5b                   	pop    ebx
1011b8d8:	5d                   	pop    ebp
1011b8d9:	c2 04 00             	ret    0x4
1011b8dc:	5f                   	pop    edi
1011b8dd:	5e                   	pop    esi
1011b8de:	33 c0                	xor    eax,eax
1011b8e0:	5b                   	pop    ebx
1011b8e1:	5d                   	pop    ebp
1011b8e2:	c2 04 00             	ret    0x4
