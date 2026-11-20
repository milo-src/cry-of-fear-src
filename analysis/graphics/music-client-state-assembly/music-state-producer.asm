; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
1008011f:	80 bf c4 00 00 00 00 	cmp    BYTE PTR [edi+0xc4],0x0
10080126:	74 1b                	je     0x10080143
10080128:	89 b7 c8 00 00 00    	mov    DWORD PTR [edi+0xc8],esi
1008012e:	5f                   	pop    edi
1008012f:	5e                   	pop    esi
10080130:	33 c0                	xor    eax,eax
10080132:	5b                   	pop    ebx
10080133:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10080136:	33 cd                	xor    ecx,ebp
10080138:	e8 83 41 03 00       	call   0x100b42c0
1008013d:	8b e5                	mov    esp,ebp
1008013f:	5d                   	pop    ebp
10080140:	c2 04 00             	ret    0x4
10080143:	8b 87 c8 00 00 00    	mov    eax,DWORD PTR [edi+0xc8]
10080149:	85 c0                	test   eax,eax
1008014b:	74 2f                	je     0x1008017c
1008014d:	85 f6                	test   esi,esi
1008014f:	74 2b                	je     0x1008017c
10080151:	8b ce                	mov    ecx,esi
10080153:	8a 10                	mov    dl,BYTE PTR [eax]
10080155:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080157:	75 1a                	jne    0x10080173
10080159:	84 d2                	test   dl,dl
1008015b:	74 12                	je     0x1008016f
1008015d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10080160:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080163:	75 0e                	jne    0x10080173
10080165:	83 c0 02             	add    eax,0x2
10080168:	83 c1 02             	add    ecx,0x2
1008016b:	84 d2                	test   dl,dl
1008016d:	75 e4                	jne    0x10080153
1008016f:	33 c0                	xor    eax,eax
10080171:	eb 05                	jmp    0x10080178
10080173:	1b c0                	sbb    eax,eax
10080175:	83 c8 01             	or     eax,0x1
10080178:	85 c0                	test   eax,eax
1008017a:	74 b2                	je     0x1008012e
1008017c:	8d 5f 36             	lea    ebx,[edi+0x36]
1008017f:	8b c6                	mov    eax,esi
10080181:	8b cb                	mov    ecx,ebx
10080183:	8a 10                	mov    dl,BYTE PTR [eax]
10080185:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080187:	75 1a                	jne    0x100801a3
10080189:	84 d2                	test   dl,dl
1008018b:	74 12                	je     0x1008019f
1008018d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10080190:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080193:	75 0e                	jne    0x100801a3
10080195:	83 c0 02             	add    eax,0x2
10080198:	83 c1 02             	add    ecx,0x2
1008019b:	84 d2                	test   dl,dl
1008019d:	75 e4                	jne    0x10080183
1008019f:	33 c0                	xor    eax,eax
100801a1:	eb 05                	jmp    0x100801a8
100801a3:	1b c0                	sbb    eax,eax
100801a5:	83 c8 01             	or     eax,0x1
100801a8:	85 c0                	test   eax,eax
100801aa:	74 82                	je     0x1008012e
100801ac:	56                   	push   esi
100801ad:	c7 87 cc 00 00 00 00 	mov    DWORD PTR [edi+0xcc],0x0
100801b4:	00 00 00 
100801b7:	c7 87 d0 00 00 00 00 	mov    DWORD PTR [edi+0xd0],0x0
100801be:	00 00 00 
100801c1:	c7 87 d4 00 00 00 00 	mov    DWORD PTR [edi+0xd4],0x0
100801c8:	00 00 00 
100801cb:	c7 87 d8 00 00 00 00 	mov    DWORD PTR [edi+0xd8],0x0
100801d2:	00 00 00 
