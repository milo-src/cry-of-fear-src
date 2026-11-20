
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100090e0 <.text+0x80e0>:
100090e0:	55                   	push   ebp
100090e1:	8b ec                	mov    ebp,esp
100090e3:	a1 e8 0f 22 10       	mov    eax,ds:0x10220fe8
100090e8:	83 ec 08             	sub    esp,0x8
100090eb:	53                   	push   ebx
100090ec:	33 db                	xor    ebx,ebx
100090ee:	85 c0                	test   eax,eax
100090f0:	7e 57                	jle    0x10009149
100090f2:	b9 f0 0f 22 10       	mov    ecx,0x10220ff0
100090f7:	56                   	push   esi
100090f8:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100090fb:	57                   	push   edi
100090fc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10009100:	8d 53 01             	lea    edx,[ebx+0x1]
10009103:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
10009106:	8b f2                	mov    esi,edx
10009108:	3b d0                	cmp    edx,eax
1000910a:	7d 2f                	jge    0x1000913b
1000910c:	8d 79 0d             	lea    edi,[ecx+0xd]
1000910f:	90                   	nop
10009110:	57                   	push   edi
10009111:	51                   	push   ecx
10009112:	e8 a4 2b 17 00       	call   0x1017bcbb
10009117:	83 c4 08             	add    esp,0x8
1000911a:	85 c0                	test   eax,eax
1000911c:	7e 0a                	jle    0x10009128
1000911e:	56                   	push   esi
1000911f:	53                   	push   ebx
10009120:	e8 eb 03 00 00       	call   0x10009510
10009125:	83 c4 08             	add    esp,0x8
10009128:	a1 e8 0f 22 10       	mov    eax,ds:0x10220fe8
1000912d:	46                   	inc    esi
1000912e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10009131:	83 c7 0d             	add    edi,0xd
10009134:	3b f0                	cmp    esi,eax
10009136:	7c d8                	jl     0x10009110
10009138:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
1000913b:	8b da                	mov    ebx,edx
1000913d:	83 c1 0d             	add    ecx,0xd
10009140:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
10009143:	3b d8                	cmp    ebx,eax
10009145:	7c b9                	jl     0x10009100
10009147:	5f                   	pop    edi
10009148:	5e                   	pop    esi
10009149:	5b                   	pop    ebx
1000914a:	8b e5                	mov    esp,ebp
1000914c:	5d                   	pop    ebp
1000914d:	c3                   	ret
