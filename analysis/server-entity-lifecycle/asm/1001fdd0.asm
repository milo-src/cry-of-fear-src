
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fdd0 <.text+0x1edd0>:
1001fdd0:	55                   	push   ebp
1001fdd1:	8b ec                	mov    ebp,esp
1001fdd3:	56                   	push   esi
1001fdd4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1001fdd7:	8b f1                	mov    esi,ecx
1001fdd9:	e8 82 ec fe ff       	call   0x1000ea60
1001fdde:	85 c0                	test   eax,eax
1001fde0:	75 05                	jne    0x1001fde7
1001fde2:	5e                   	pop    esi
1001fde3:	5d                   	pop    ebp
1001fde4:	c2 04 00             	ret    0x4
1001fde7:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1001fdea:	6a 01                	push   0x1
1001fdec:	68 4c 1f 21 10       	push   0x10211f4c
1001fdf1:	56                   	push   esi
1001fdf2:	68 68 98 1a 10       	push   0x101a9868
1001fdf7:	e8 14 72 0f 00       	call   0x10117010
1001fdfc:	5e                   	pop    esi
1001fdfd:	5d                   	pop    ebp
1001fdfe:	c2 04 00             	ret    0x4
