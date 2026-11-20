
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004e120 <.text+0x4d120>:
1004e120:	55                   	push   ebp
1004e121:	8b ec                	mov    ebp,esp
1004e123:	56                   	push   esi
1004e124:	8b f1                	mov    esi,ecx
1004e126:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1004e129:	85 c9                	test   ecx,ecx
1004e12b:	74 27                	je     0x1004e154
1004e12d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004e130:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
1004e137:	74 1b                	je     0x1004e154
1004e139:	6a 00                	push   0x0
1004e13b:	6a 00                	push   0x0
1004e13d:	68 00 00 80 00       	push   0x800000
1004e142:	e8 b9 ee 08 00       	call   0x100dd000
1004e147:	84 c0                	test   al,al
1004e149:	75 09                	jne    0x1004e154
1004e14b:	56                   	push   esi
1004e14c:	e8 af b7 0c 00       	call   0x10119900
1004e151:	83 c4 04             	add    esp,0x4
1004e154:	5e                   	pop    esi
1004e155:	5d                   	pop    ebp
1004e156:	c2 04 00             	ret    0x4
