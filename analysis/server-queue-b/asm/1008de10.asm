
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008de10 <.text+0x8ce10>:
1008de10:	55                   	push   ebp
1008de11:	8b ec                	mov    ebp,esp
1008de13:	53                   	push   ebx
1008de14:	56                   	push   esi
1008de15:	57                   	push   edi
1008de16:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008de19:	8b d9                	mov    ebx,ecx
1008de1b:	ba bc f3 1b 10       	mov    edx,0x101bf3bc
1008de20:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1008de23:	8b c6                	mov    eax,esi
1008de25:	8a 08                	mov    cl,BYTE PTR [eax]
1008de27:	3a 0a                	cmp    cl,BYTE PTR [edx]
1008de29:	75 1a                	jne    0x1008de45
1008de2b:	84 c9                	test   cl,cl
1008de2d:	74 12                	je     0x1008de41
1008de2f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1008de32:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1008de35:	75 0e                	jne    0x1008de45
1008de37:	83 c0 02             	add    eax,0x2
1008de3a:	83 c2 02             	add    edx,0x2
1008de3d:	84 c9                	test   cl,cl
1008de3f:	75 e4                	jne    0x1008de25
1008de41:	33 c0                	xor    eax,eax
1008de43:	eb 05                	jmp    0x1008de4a
1008de45:	1b c0                	sbb    eax,eax
1008de47:	83 c8 01             	or     eax,0x1
1008de4a:	85 c0                	test   eax,eax
1008de4c:	75 24                	jne    0x1008de72
1008de4e:	ff 77 08             	push   DWORD PTR [edi+0x8]
1008de51:	e8 96 17 0e 00       	call   0x1016f5ec
1008de56:	83 c4 04             	add    esp,0x4
1008de59:	e8 22 02 0b 00       	call   0x1013e080
1008de5e:	88 83 80 01 00 00    	mov    BYTE PTR [ebx+0x180],al
1008de64:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1008de6b:	5f                   	pop    edi
1008de6c:	5e                   	pop    esi
1008de6d:	5b                   	pop    ebx
1008de6e:	5d                   	pop    ebp
1008de6f:	c2 04 00             	ret    0x4
1008de72:	b9 c4 f3 1b 10       	mov    ecx,0x101bf3c4
1008de77:	8b c6                	mov    eax,esi
1008de79:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1008de80:	8a 10                	mov    dl,BYTE PTR [eax]
1008de82:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008de84:	75 1a                	jne    0x1008dea0
1008de86:	84 d2                	test   dl,dl
1008de88:	74 12                	je     0x1008de9c
1008de8a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008de8d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008de90:	75 0e                	jne    0x1008dea0
1008de92:	83 c0 02             	add    eax,0x2
1008de95:	83 c1 02             	add    ecx,0x2
1008de98:	84 d2                	test   dl,dl
1008de9a:	75 e4                	jne    0x1008de80
1008de9c:	33 c0                	xor    eax,eax
1008de9e:	eb 05                	jmp    0x1008dea5
1008dea0:	1b c0                	sbb    eax,eax
1008dea2:	83 c8 01             	or     eax,0x1
1008dea5:	85 c0                	test   eax,eax
1008dea7:	74 bb                	je     0x1008de64
1008dea9:	b8 cc f3 1b 10       	mov    eax,0x101bf3cc
1008deae:	66 90                	xchg   ax,ax
1008deb0:	8a 0e                	mov    cl,BYTE PTR [esi]
1008deb2:	3a 08                	cmp    cl,BYTE PTR [eax]
1008deb4:	75 1a                	jne    0x1008ded0
1008deb6:	84 c9                	test   cl,cl
1008deb8:	74 12                	je     0x1008decc
1008deba:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1008debd:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1008dec0:	75 0e                	jne    0x1008ded0
1008dec2:	83 c6 02             	add    esi,0x2
1008dec5:	83 c0 02             	add    eax,0x2
1008dec8:	84 c9                	test   cl,cl
1008deca:	75 e4                	jne    0x1008deb0
1008decc:	33 c0                	xor    eax,eax
1008dece:	eb 05                	jmp    0x1008ded5
1008ded0:	1b c0                	sbb    eax,eax
1008ded2:	83 c8 01             	or     eax,0x1
1008ded5:	85 c0                	test   eax,eax
1008ded7:	74 8b                	je     0x1008de64
1008ded9:	57                   	push   edi
1008deda:	8b cb                	mov    ecx,ebx
1008dedc:	e8 9f 45 07 00       	call   0x10102480
1008dee1:	5f                   	pop    edi
1008dee2:	5e                   	pop    esi
1008dee3:	5b                   	pop    ebx
1008dee4:	5d                   	pop    ebp
1008dee5:	c2 04 00             	ret    0x4
