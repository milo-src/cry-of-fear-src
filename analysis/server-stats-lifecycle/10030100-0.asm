
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10030100 <.text+0x2f100>:
10030100:	55                   	push   ebp
10030101:	8b ec                	mov    ebp,esp
10030103:	6a ff                	push   0xffffffff
10030105:	68 1d d5 19 10       	push   0x1019d51d
1003010a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10030110:	50                   	push   eax
10030111:	83 ec 20             	sub    esp,0x20
10030114:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10030119:	33 c5                	xor    eax,ebp
1003011b:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1003011e:	53                   	push   ebx
1003011f:	56                   	push   esi
10030120:	57                   	push   edi
10030121:	50                   	push   eax
10030122:	8d 45 f4             	lea    eax,[ebp-0xc]
10030125:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1003012b:	8b f1                	mov    esi,ecx
1003012d:	89 75 d4             	mov    DWORD PTR [ebp-0x2c],esi
10030130:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10030133:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10030136:	8b ca                	mov    ecx,edx
10030138:	89 75 d4             	mov    DWORD PTR [ebp-0x2c],esi
1003013b:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
10030142:	8b 38                	mov    edi,DWORD PTR [eax]
10030144:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
10030147:	8d 41 01             	lea    eax,[ecx+0x1]
1003014a:	c7 45 ec 0f 00 00 00 	mov    DWORD PTR [ebp-0x14],0xf
10030151:	c6 45 d8 00          	mov    BYTE PTR [ebp-0x28],0x0
10030155:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
10030158:	8a 01                	mov    al,BYTE PTR [ecx]
1003015a:	41                   	inc    ecx
1003015b:	84 c0                	test   al,al
1003015d:	75 f9                	jne    0x10030158
1003015f:	2b 4d d4             	sub    ecx,DWORD PTR [ebp-0x2c]
10030162:	51                   	push   ecx
10030163:	52                   	push   edx
10030164:	8d 4d d8             	lea    ecx,[ebp-0x28]
10030167:	e8 a4 76 00 00       	call   0x10037810
1003016c:	8d 45 d8             	lea    eax,[ebp-0x28]
1003016f:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10030176:	50                   	push   eax
10030177:	53                   	push   ebx
10030178:	57                   	push   edi
10030179:	8b ce                	mov    ecx,esi
1003017b:	e8 20 fc ff ff       	call   0x1002fda0
10030180:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
10030183:	83 f9 10             	cmp    ecx,0x10
10030186:	72 0d                	jb     0x10030195
10030188:	41                   	inc    ecx
10030189:	51                   	push   ecx
1003018a:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
1003018d:	e8 fe f0 ff ff       	call   0x1002f290
10030192:	83 c4 08             	add    esp,0x8
10030195:	8b c6                	mov    eax,esi
10030197:	c7 06 4c da 1a 10    	mov    DWORD PTR [esi],0x101ada4c
1003019d:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100301a0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100301a7:	59                   	pop    ecx
100301a8:	5f                   	pop    edi
100301a9:	5e                   	pop    esi
100301aa:	5b                   	pop    ebx
100301ab:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100301ae:	33 cd                	xor    ecx,ebp
100301b0:	e8 fe d9 10 00       	call   0x1013dbb3
100301b5:	8b e5                	mov    esp,ebp
100301b7:	5d                   	pop    ebp
100301b8:	c2 08 00             	ret    0x8
