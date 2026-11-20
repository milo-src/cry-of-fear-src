
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101058c0 <.text+0x1048c0>:
101058c0:	53                   	push   ebx
101058c1:	56                   	push   esi
101058c2:	57                   	push   edi
101058c3:	33 f6                	xor    esi,esi
101058c5:	8b d9                	mov    ebx,ecx
101058c7:	33 ff                	xor    edi,edi
101058c9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
101058d0:	6a 01                	push   0x1
101058d2:	57                   	push   edi
101058d3:	56                   	push   esi
101058d4:	8b cb                	mov    ecx,ebx
101058d6:	e8 65 e7 ff ff       	call   0x10104040
101058db:	8b f0                	mov    esi,eax
101058dd:	85 f6                	test   esi,esi
101058df:	74 26                	je     0x10105907
101058e1:	8b 06                	mov    eax,DWORD PTR [esi]
101058e3:	8b ce                	mov    ecx,esi
101058e5:	ff 50 78             	call   DWORD PTR [eax+0x78]
101058e8:	85 c0                	test   eax,eax
101058ea:	74 0a                	je     0x101058f6
101058ec:	8b 10                	mov    edx,DWORD PTR [eax]
101058ee:	8b c8                	mov    ecx,eax
101058f0:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
101058f6:	6a 01                	push   0x1
101058f8:	57                   	push   edi
101058f9:	56                   	push   esi
101058fa:	8b cb                	mov    ecx,ebx
101058fc:	e8 3f e7 ff ff       	call   0x10104040
10105901:	8b f0                	mov    esi,eax
10105903:	85 f6                	test   esi,esi
10105905:	75 da                	jne    0x101058e1
10105907:	47                   	inc    edi
10105908:	83 ff 06             	cmp    edi,0x6
1010590b:	7c c3                	jl     0x101058d0
1010590d:	5f                   	pop    edi
1010590e:	5e                   	pop    esi
1010590f:	5b                   	pop    ebx
10105910:	c3                   	ret
