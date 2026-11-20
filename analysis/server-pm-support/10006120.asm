
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006120 <.text+0x5120>:
10006120:	55                   	push   ebp
10006121:	8b ec                	mov    ebp,esp
10006123:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10006126:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10006129:	56                   	push   esi
1000612a:	57                   	push   edi
1000612b:	8d 0c 41             	lea    ecx,[ecx+eax*2]
1000612e:	8b 3c 8d e8 0e 22 10 	mov    edi,DWORD PTR [ecx*4+0x10220ee8]
10006135:	8d 47 01             	lea    eax,[edi+0x1]
10006138:	89 04 8d e8 0e 22 10 	mov    DWORD PTR [ecx*4+0x10220ee8],eax
1000613f:	b8 f7 12 da 4b       	mov    eax,0x4bda12f7
10006144:	f7 ef                	imul   edi
10006146:	c1 fa 04             	sar    edx,0x4
10006149:	8b c2                	mov    eax,edx
1000614b:	c1 e8 1f             	shr    eax,0x1f
1000614e:	03 c2                	add    eax,edx
10006150:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10006153:	6b c0 36             	imul   eax,eax,0x36
10006156:	2b f8                	sub    edi,eax
10006158:	8b c7                	mov    eax,edi
1000615a:	8d 34 7f             	lea    esi,[edi+edi*2]
1000615d:	8b 0c b5 60 0c 22 10 	mov    ecx,DWORD PTR [esi*4+0x10220c60]
10006164:	89 0a                	mov    DWORD PTR [edx],ecx
10006166:	8b 0c b5 64 0c 22 10 	mov    ecx,DWORD PTR [esi*4+0x10220c64]
1000616d:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
10006170:	8b 0c b5 68 0c 22 10 	mov    ecx,DWORD PTR [esi*4+0x10220c68]
10006177:	5f                   	pop    edi
10006178:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
1000617b:	5e                   	pop    esi
1000617c:	5d                   	pop    ebp
1000617d:	c3                   	ret
