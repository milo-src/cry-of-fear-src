
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116140 <.text+0x115140>:
10116140:	55                   	push   ebp
10116141:	8b ec                	mov    ebp,esp
10116143:	56                   	push   esi
10116144:	8b f1                	mov    esi,ecx
10116146:	8b 16                	mov    edx,DWORD PTR [esi]
10116148:	85 d2                	test   edx,edx
1011614a:	74 46                	je     0x10116192
1011614c:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1011614f:	57                   	push   edi
10116150:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10116153:	03 c7                	add    eax,edi
10116155:	3b 42 0c             	cmp    eax,DWORD PTR [edx+0xc]
10116158:	7e 1e                	jle    0x10116178
1011615a:	68 e4 59 1e 10       	push   0x101e59e4
1011615f:	6a 04                	push   0x4
10116161:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10116167:	8b 0e                	mov    ecx,DWORD PTR [esi]
10116169:	83 c4 08             	add    esp,0x8
1011616c:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
1011616f:	5f                   	pop    edi
10116170:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10116173:	5e                   	pop    esi
10116174:	5d                   	pop    ebp
10116175:	c2 08 00             	ret    0x8
10116178:	57                   	push   edi
10116179:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011617c:	ff 72 04             	push   DWORD PTR [edx+0x4]
1011617f:	e8 ac 9f 02 00       	call   0x10140130
10116184:	8b 06                	mov    eax,DWORD PTR [esi]
10116186:	83 c4 0c             	add    esp,0xc
10116189:	01 78 04             	add    DWORD PTR [eax+0x4],edi
1011618c:	8b 06                	mov    eax,DWORD PTR [esi]
1011618e:	01 78 08             	add    DWORD PTR [eax+0x8],edi
10116191:	5f                   	pop    edi
10116192:	5e                   	pop    esi
10116193:	5d                   	pop    ebp
10116194:	c2 08 00             	ret    0x8
