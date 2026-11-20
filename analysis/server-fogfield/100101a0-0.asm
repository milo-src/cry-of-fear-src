
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100101a0 <.text+0xf1a0>:
100101a0:	55                   	push   ebp
100101a1:	8b ec                	mov    ebp,esp
100101a3:	56                   	push   esi
100101a4:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100101a7:	8b f1                	mov    esi,ecx
100101a9:	e8 a2 81 00 00       	call   0x10018350
100101ae:	85 c0                	test   eax,eax
100101b0:	74 2b                	je     0x100101dd
100101b2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100101b5:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
100101bb:	e8 80 75 00 00       	call   0x10017740
100101c0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100101c3:	8b ce                	mov    ecx,esi
100101c5:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
100101cc:	74 0a                	je     0x100101d8
100101ce:	e8 0d 20 00 00       	call   0x100121e0
100101d3:	5e                   	pop    esi
100101d4:	5d                   	pop    ebp
100101d5:	c2 10 00             	ret    0x10
100101d8:	e8 63 20 00 00       	call   0x10012240
100101dd:	5e                   	pop    esi
100101de:	5d                   	pop    ebp
100101df:	c2 10 00             	ret    0x10
