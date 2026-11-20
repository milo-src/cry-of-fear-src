
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011f680 <.text+0x11e680>:
1011f680:	55                   	push   ebp
1011f681:	8b ec                	mov    ebp,esp
1011f683:	56                   	push   esi
1011f684:	8b f1                	mov    esi,ecx
1011f686:	e8 95 b4 ff ff       	call   0x1011ab20
1011f68b:	d8 45 08             	fadd   DWORD PTR [ebp+0x8]
1011f68e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011f691:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1011f694:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011f699:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
1011f69e:	f3 0f 11 80 04 01 00 	movss  DWORD PTR [eax+0x104],xmm0
1011f6a5:	00 
1011f6a6:	5e                   	pop    esi
1011f6a7:	5d                   	pop    ebp
1011f6a8:	c2 04 00             	ret    0x4
