
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116230 <.text+0x115230>:
10116230:	55                   	push   ebp
10116231:	8b ec                	mov    ebp,esp
10116233:	56                   	push   esi
10116234:	8b f1                	mov    esi,ecx
10116236:	8b 16                	mov    edx,DWORD PTR [esi]
10116238:	85 d2                	test   edx,edx
1011623a:	74 59                	je     0x10116295
1011623c:	8b 4a 0c             	mov    ecx,DWORD PTR [edx+0xc]
1011623f:	53                   	push   ebx
10116240:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
10116243:	8b c3                	mov    eax,ebx
10116245:	2b 02                	sub    eax,DWORD PTR [edx]
10116247:	3b c1                	cmp    eax,ecx
10116249:	7d 49                	jge    0x10116294
1011624b:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1011624e:	57                   	push   edi
1011624f:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10116252:	03 c7                	add    eax,edi
10116254:	3b c1                	cmp    eax,ecx
10116256:	7e 1f                	jle    0x10116277
10116258:	68 20 5a 1e 10       	push   0x101e5a20
1011625d:	6a 04                	push   0x4
1011625f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10116265:	8b 0e                	mov    ecx,DWORD PTR [esi]
10116267:	83 c4 08             	add    esp,0x8
1011626a:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
1011626d:	5f                   	pop    edi
1011626e:	5b                   	pop    ebx
1011626f:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10116272:	5e                   	pop    esi
10116273:	5d                   	pop    ebp
10116274:	c2 08 00             	ret    0x8
10116277:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011627a:	85 c0                	test   eax,eax
1011627c:	74 0d                	je     0x1011628b
1011627e:	57                   	push   edi
1011627f:	53                   	push   ebx
10116280:	50                   	push   eax
10116281:	e8 aa 9e 02 00       	call   0x10140130
10116286:	8b 16                	mov    edx,DWORD PTR [esi]
10116288:	83 c4 0c             	add    esp,0xc
1011628b:	01 7a 04             	add    DWORD PTR [edx+0x4],edi
1011628e:	8b 06                	mov    eax,DWORD PTR [esi]
10116290:	01 78 08             	add    DWORD PTR [eax+0x8],edi
10116293:	5f                   	pop    edi
10116294:	5b                   	pop    ebx
10116295:	5e                   	pop    esi
10116296:	5d                   	pop    ebp
10116297:	c2 08 00             	ret    0x8
