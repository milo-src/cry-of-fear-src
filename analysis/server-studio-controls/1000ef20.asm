
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000ef20 <.text+0xdf20>:
1000ef20:	55                   	push   ebp
1000ef21:	8b ec                	mov    ebp,esp
1000ef23:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1000ef26:	53                   	push   ebx
1000ef27:	56                   	push   esi
1000ef28:	57                   	push   edi
1000ef29:	85 d2                	test   edx,edx
1000ef2b:	0f 84 c2 00 00 00    	je     0x1000eff3
1000ef31:	69 5d 0c b0 00 00 00 	imul   ebx,DWORD PTR [ebp+0xc],0xb0
1000ef38:	8b ba a8 00 00 00    	mov    edi,DWORD PTR [edx+0xa8]
1000ef3e:	03 fa                	add    edi,edx
1000ef40:	8b b4 3b a0 00 00 00 	mov    esi,DWORD PTR [ebx+edi*1+0xa0]
1000ef47:	85 f6                	test   esi,esi
1000ef49:	0f 84 a4 00 00 00    	je     0x1000eff3
1000ef4f:	69 45 10 b0 00 00 00 	imul   eax,DWORD PTR [ebp+0x10],0xb0
1000ef56:	8b 8c 38 a0 00 00 00 	mov    ecx,DWORD PTR [eax+edi*1+0xa0]
1000ef5d:	85 c9                	test   ecx,ecx
1000ef5f:	0f 84 8e 00 00 00    	je     0x1000eff3
1000ef65:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000ef68:	83 38 00             	cmp    DWORD PTR [eax],0x0
1000ef6b:	7e 07                	jle    0x1000ef74
1000ef6d:	8b b4 3b a4 00 00 00 	mov    esi,DWORD PTR [ebx+edi*1+0xa4]
1000ef74:	3b f1                	cmp    esi,ecx
1000ef76:	75 0e                	jne    0x1000ef86
1000ef78:	5f                   	pop    edi
1000ef79:	5e                   	pop    esi
1000ef7a:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
1000ef80:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000ef83:	5b                   	pop    ebx
1000ef84:	5d                   	pop    ebp
1000ef85:	c3                   	ret
1000ef86:	8d 46 ff             	lea    eax,[esi-0x1]
1000ef89:	0f af 82 ec 00 00 00 	imul   eax,DWORD PTR [edx+0xec]
1000ef90:	03 82 f0 00 00 00    	add    eax,DWORD PTR [edx+0xf0]
1000ef96:	03 c1                	add    eax,ecx
1000ef98:	0f b6 5c 10 ff       	movzx  ebx,BYTE PTR [eax+edx*1-0x1]
1000ef9d:	85 db                	test   ebx,ebx
1000ef9f:	74 52                	je     0x1000eff3
1000efa1:	8b 82 a4 00 00 00    	mov    eax,DWORD PTR [edx+0xa4]
1000efa7:	33 c9                	xor    ecx,ecx
1000efa9:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000efac:	85 c0                	test   eax,eax
1000efae:	7e 33                	jle    0x1000efe3
1000efb0:	8d 87 a4 00 00 00    	lea    eax,[edi+0xa4]
1000efb6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000efb9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1000efc0:	8b 50 fc             	mov    edx,DWORD PTR [eax-0x4]
1000efc3:	3b d6                	cmp    edx,esi
1000efc5:	75 04                	jne    0x1000efcb
1000efc7:	39 18                	cmp    DWORD PTR [eax],ebx
1000efc9:	74 30                	je     0x1000effb
1000efcb:	83 78 04 00          	cmp    DWORD PTR [eax+0x4],0x0
1000efcf:	74 08                	je     0x1000efd9
1000efd1:	39 30                	cmp    DWORD PTR [eax],esi
1000efd3:	75 04                	jne    0x1000efd9
1000efd5:	3b d3                	cmp    edx,ebx
1000efd7:	74 32                	je     0x1000f00b
1000efd9:	41                   	inc    ecx
1000efda:	05 b0 00 00 00       	add    eax,0xb0
1000efdf:	3b cf                	cmp    ecx,edi
1000efe1:	7c dd                	jl     0x1000efc0
1000efe3:	68 8c 33 1a 10       	push   0x101a338c
1000efe8:	6a 01                	push   0x1
1000efea:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000eff0:	83 c4 08             	add    esp,0x8
1000eff3:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000eff6:	5f                   	pop    edi
1000eff7:	5e                   	pop    esi
1000eff8:	5b                   	pop    ebx
1000eff9:	5d                   	pop    ebp
1000effa:	c3                   	ret
1000effb:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000effe:	5f                   	pop    edi
1000efff:	5e                   	pop    esi
1000f000:	5b                   	pop    ebx
1000f001:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
1000f007:	8b c1                	mov    eax,ecx
1000f009:	5d                   	pop    ebp
1000f00a:	c3                   	ret
1000f00b:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000f00e:	5f                   	pop    edi
1000f00f:	5e                   	pop    esi
1000f010:	5b                   	pop    ebx
1000f011:	c7 00 ff ff ff ff    	mov    DWORD PTR [eax],0xffffffff
1000f017:	8b c1                	mov    eax,ecx
1000f019:	5d                   	pop    ebp
1000f01a:	c3                   	ret
