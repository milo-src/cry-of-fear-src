
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000da30 <.text+0xca30>:
1000da30:	55                   	push   ebp
1000da31:	8b ec                	mov    ebp,esp
1000da33:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000da38:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
1000da3e:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000da41:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000da44:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000da4a:	03 c2                	add    eax,edx
1000da4c:	03 ca                	add    ecx,edx
1000da4e:	66 90                	xchg   ax,ax
1000da50:	8a 11                	mov    dl,BYTE PTR [ecx]
1000da52:	3a 10                	cmp    dl,BYTE PTR [eax]
1000da54:	75 23                	jne    0x1000da79
1000da56:	84 d2                	test   dl,dl
1000da58:	74 12                	je     0x1000da6c
1000da5a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1000da5d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1000da60:	75 17                	jne    0x1000da79
1000da62:	83 c1 02             	add    ecx,0x2
1000da65:	83 c0 02             	add    eax,0x2
1000da68:	84 d2                	test   dl,dl
1000da6a:	75 e4                	jne    0x1000da50
1000da6c:	33 c9                	xor    ecx,ecx
1000da6e:	33 c0                	xor    eax,eax
1000da70:	85 c9                	test   ecx,ecx
1000da72:	0f 94 c0             	sete   al
1000da75:	5d                   	pop    ebp
1000da76:	c2 04 00             	ret    0x4
1000da79:	1b c9                	sbb    ecx,ecx
1000da7b:	33 c0                	xor    eax,eax
1000da7d:	83 c9 01             	or     ecx,0x1
1000da80:	85 c9                	test   ecx,ecx
1000da82:	0f 94 c0             	sete   al
1000da85:	5d                   	pop    ebp
1000da86:	c2 04 00             	ret    0x4
