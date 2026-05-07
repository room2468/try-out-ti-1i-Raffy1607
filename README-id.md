# Tryout Kuis OS — Autograding

Repositori ini berisi soal tryout kuis Sistem Operasi. Penilaian dilakukan secara otomatis menggunakan **GitHub Actions** setiap kali kamu melakukan `push`.

## Tugas

Lengkapi file `calculator` sehingga dapat menerima ekspresi matematika dari stdin dan mencetak hasilnya.

Contoh penggunaan:

```
echo "1 + 1" | ./calculator
2
```

## Cara Mengerjakan

1. Buka file `calculator`.
2. Temukan baris yang bertanda `TODO` dan ganti dengan perintah yang tepat untuk mengevaluasi variabel `$expression` menggunakan program `bc`.
3. Simpan file.

## Menguji Secara Lokal

Sebelum submit, pastikan script dapat dijalankan dan memberikan output yang benar:

```bash
# Beri izin eksekusi (hanya perlu dilakukan sekali)
chmod +x calculator

# Uji setiap operasi
echo "1 + 1" | ./calculator   # output: 2
echo "3 - 1" | ./calculator   # output: 2
echo "3 * 1" | ./calculator   # output: 3
echo "3 / 1" | ./calculator   # output: 3
```

## Cara Submit

Submit dilakukan dengan melakukan **commit** dan **push** ke repositori ini:

```bash
git add calculator
git commit -m "Implementasi calculator"
git push
```

Setelah `push`, GitHub Actions akan otomatis menjalankan pengujian. Kamu dapat melihat hasilnya di tab **Actions** pada repositori GitHub kamu.

## Kriteria Penilaian

Terdapat 4 pengujian, masing-masing bernilai **10 poin**:

| Pengujian | Input    | Output yang Diharapkan |
|-----------|----------|------------------------|
| Add       | `1 + 1`  | `2`                    |
| Substract | `3 - 1`  | `2`                    |
| Multiply  | `3 * 1`  | `3`                    |
| Divide    | `3 / 1`  | `3`                    |

Total nilai maksimal: **40 poin**.

> Output harus **tepat** (exact match) — pastikan tidak ada spasi atau karakter tambahan.
