
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b130 <.text+0x11a130>:
1011b130:	55                   	push   ebp
1011b131:	8b ec                	mov    ebp,esp
1011b133:	56                   	push   esi
1011b134:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1011b137:	57                   	push   edi
1011b138:	8b f9                	mov    edi,ecx
1011b13a:	ff 36                	push   DWORD PTR [esi]
1011b13c:	ff 15 84 30 22 10    	call   DWORD PTR ds:0x10223084
1011b142:	8b d0                	mov    edx,eax
1011b144:	83 c4 04             	add    esp,0x4
1011b147:	85 d2                	test   edx,edx
1011b149:	74 23                	je     0x1011b16e
1011b14b:	8b ca                	mov    ecx,edx
1011b14d:	8d 71 01             	lea    esi,[ecx+0x1]
1011b150:	8a 01                	mov    al,BYTE PTR [ecx]
1011b152:	41                   	inc    ecx
1011b153:	84 c0                	test   al,al
1011b155:	75 f9                	jne    0x1011b150
1011b157:	2b ce                	sub    ecx,esi
1011b159:	52                   	push   edx
1011b15a:	8d 41 01             	lea    eax,[ecx+0x1]
1011b15d:	8b cf                	mov    ecx,edi
1011b15f:	50                   	push   eax
1011b160:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b163:	e8 38 b0 ff ff       	call   0x101161a0
1011b168:	5f                   	pop    edi
1011b169:	5e                   	pop    esi
1011b16a:	5d                   	pop    ebp
1011b16b:	c2 10 00             	ret    0x10
1011b16e:	ff 36                	push   DWORD PTR [esi]
1011b170:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b173:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b176:	68 10 59 1e 10       	push   0x101e5910
1011b17b:	6a 04                	push   0x4
1011b17d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011b183:	83 c4 14             	add    esp,0x14
1011b186:	5f                   	pop    edi
1011b187:	5e                   	pop    esi
1011b188:	5d                   	pop    ebp
1011b189:	c2 10 00             	ret    0x10
